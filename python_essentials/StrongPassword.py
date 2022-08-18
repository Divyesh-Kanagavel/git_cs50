#!python3

# A program to detect if password is strong using REGEX
# Strong password - Atleast 8 characters, at least one numeric ,one uppercase and one lowercase letter
import re

#TODO : a function to check if password is strong
# write regex patterns to search for in the password
SizeRegex = re.compile(r'.{8,}')
DigitRegex = re.compile(r'[0-9]')
LowerRegex = re.compile(r'[a-z]')
UpperRegex = re.compile(r'[A-Z]')

def strong_password(passwd):
    sizemo = SizeRegex.search(passwd)
    digitmo = DigitRegex.search(passwd)
    lowermo = LowerRegex.search(passwd)
    uppermo = UpperRegex.search(passwd)

    if sizemo is not None and digitmo is not None and lowermo is not None and uppermo is not None:
        print("Password is strong!")
    else:
        print("Find a better password")


strong_password("DivyeshK")
