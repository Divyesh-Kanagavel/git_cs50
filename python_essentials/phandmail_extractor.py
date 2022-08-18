#! python3
# Phone number and email extractor from a document and paste in the clipboard

import re, pyperclip

#TODO : regex for phone number

phoneRegex = re.compile(r'''(
    (\d{3}|\(\d{3}\))?                          #area code - Us number perhaps
    (\s|-|\.)?                                  #separator 
    (\d{3})                                     #first 3 digits
    (\s|-|\.)                                   #separator
    (\d{4})                                     # last  digits
    (\s*(ext|x|ext.)\s*(\d{2,5}))?)''',re.VERBOSE)  # extension








#TODO : regex for email

emailRegex = re.compile(r'''(
    [a-zA-Z0-9._%-+]+
    @
    [a-zA-Z0-9.-]+
    (\.[a-zA-Z]{2,4})
)''',re.VERBOSE)





#TODO : find all matches in clipboard text

text = str(pyperclip.paste())
matches = []
for groups in phoneRegex.findall(text):
    phoneNum = '-'.join(groups[1],groups[3],groups[5])
    if groups[8]!='':
        phoneNum+=' x' + groups[8]

    matches.append(phoneNum)

for groups in emailRegex.findall(text):
    matches.append(groups[0])




#TODO : copy required string in clipboard

if len(matches) > 0:
    pyperclip.copy('\n'.join(matches))
    print('copied to clipboard: ')
    print('\n'.join(matches))

else:
    print("No phone number or email address found")