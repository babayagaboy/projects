#ifndef __EASY_RANDOM_HPP__
#define __EASY_RANDOM_HPP__

#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <map>
#include <iterator>
#include <algorithm>
#include <vector>
#include <random>


namespace easy_std
{
    inline static std::mt19937 ft_rand_gen()
    {
        auto seed = static_cast<unsigned int>(std::chrono::system_clock::now().time_since_epoch().count());
        return std::mt19937(seed);
    }

    inline int ft_randint(int a , int b)
    {
        std::random_device rd;
        std::mt19937 rng(rd());

        std::uniform_int_distribution<int> dist(a, b);

        return dist(rng);
    }

    inline double ft_random(double a = 0.0 , double b = 1.0)
    {
        std::random_device rd;
        std::mt19937 rng(rd());

        std::uniform_real_distribution<double> dist(a, b);

        return dist(rng);
    }

    inline void ft_seed(int value)
    {
            std::mt19937 rng(value);
            rng.discard(700);
    }

    template<typename Seq>
    inline auto ft_choice(const Seq& seq)
    {
        using index_type = typename Seq::size_type;

        if (seq.empty()) {
            throw std::out_of_range("Sequence is empty");
        }

        std::random_device rd;
        std::mt19937 rng(rd());

        std::uniform_int_distribution<index_type> dist(0, seq.size() - 1);

        index_type random_index = dist(rng);

        return *(std::next(std::begin(seq), random_index));
    }

    template<typename Seq>
    inline void ft_shuffle_(Seq& seq)
    {
        std::random_device rd;
        std::mt19937 rng(rd());

        std::shuffle(std::begin(seq), std::end(seq), rng);
    }

    template<typename T, typename Seq>
    inline std::vector<T> ft_sample(const Seq& seq, int n)
    {
        if (n > std::size(seq))
            throw std::invalid_argument("Sample size exceeds sequence size");

        std::vector<T> sampled(seq.begin(), seq.end());

        ft_shuffle_(sampled);

        std::vector<T> sample(sampled.begin(), sampled.begin() + n);

        return sample;
    }
}

#endif