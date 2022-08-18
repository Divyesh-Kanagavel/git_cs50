import re

us_phoneNum_regex = re.compile(r'\d{3}-\d{3}-\d{4}')
match_object = us_phoneNum_regex.search('my number is 415-555-4252')
print('Phone number found' + match_object.group())

# re.compile(r'\w+) --> a letter, numeric digit, underscore followed by anything
# re.compile(r'[a-z]')--> any lowercase alphabet (note the square bracket)
# re.compile(r'[0-5.]) --> numeric digit within 0 and 5 followed by period. no need of backspace

# re.compile(r'^[AEIOU]) --> not in AEIOU
 