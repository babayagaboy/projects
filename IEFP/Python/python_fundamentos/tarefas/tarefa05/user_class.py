import csv
import os

class User:
    def __init__(self, username, password):
            self.username = username
            self.password = password

    
    def signIn(self):
        while (True):
            os.system('clear' if os.name == 'posix' else 'cls')

            temp_username = input("Username: ")
            temp_password = input("Password: ")

            if self.IsUsernameValid(temp_username):
                if self.IsPassWordValid(temp_password):
                    self.save_to_csv(temp_username, temp_password)
                    temp_username.username = temp_username
                    temp_username.password = temp_password
                    print("User created successfully.")
                    break
                else:
                    print("Invalid password. Please choose a password with 8 to 12 characters containing at least one number.")
            else:
                print("Username already exists. Please choose a different username.")

    def save_to_csv(self, temp_username, temp_password):
        filename = 'logged_in.csv'
        with open(filename, mode='a', newline='') as file:
            writer = csv.writer(file)
            writer.writerow([temp_username, temp_password,])

    def IsPassWordValid(self , temp_password):
        if len(temp_password) < 8 or len(temp_password) > 12:
            return False
        
        count_digits = sum(char.isdigit() for char in temp_password)
        if count_digits == 0:
             return False
        
        return True
    
    def IsUsernameValid(self, temp_username):
        filename = 'logged_in.csv'
        if os.path.isfile(filename):
            with open(filename, mode='r', newline='') as file:
                reader = csv.reader(file)
                for row in reader:
                    if row and row[0] == temp_username:
                        return False
        return True
    
    def logIn(self):
        temp_username = input("Username: ")
        temp_password = input("Password: ")
        
        with open('logged_in.csv', mode='r', newline='') as file:
            reader = csv.reader(file)
            for row in reader:
                if row and row[0] == temp_username and row[1] == temp_password:
                    return True
        return False