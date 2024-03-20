import csv
import os

from user_signin import*

escolha = input("""

1 - Log in
2 - Sign in

""")

if escolha == '1':
    pass

if escolha == '2':
    user = UserSign("" , "")
    user.signIn()