import random
import string

chars = " " + string.punctuation + string.digits + string.ascii_letters
chars = list(chars)
key = chars.copy()

random.seed(42)
random.shuffle(key)

password = "i like penis"

encrypt_password = ""

for letter in password:
    i = chars.index(letter)
    encrypt_password += key[i]

print(password)
print(encrypt_password)
