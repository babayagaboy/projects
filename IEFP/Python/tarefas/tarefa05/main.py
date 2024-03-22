import csv
import os

from user_class import*

escolha = input("""

1 - Log in
2 - Sign in

""")

if escolha == '1':
    user = User("" , "")
    if(user.logIn()):
        print(f"welcome back, {user.username}!")

if escolha == '2':
    user = User("" , "")
    user.signIn()