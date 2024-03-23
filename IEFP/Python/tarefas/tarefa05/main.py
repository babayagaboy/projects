import csv
import os

from user_class import*

escolha = input("""

1 - Log in
2 - Sign in

""")

if escolha == '1':
    user = User("" , "")
    while(True):
        if(user.logIn()):
            print(f"welcome back, {user.username}!")
            break
        else:
            print("username ou password errados")

if escolha == '2':
    user = User("" , "")
    user.signIn()