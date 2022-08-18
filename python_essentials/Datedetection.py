#! python3
# Date detection and validity check

import re

def isleapyear(year_):
    year = int(year_)
    if year%4 == 0:
        if year%100 == 0:
            if year%400 == 0:
                return True
            else:
                return False
        else:
            return True

    return False


#TODO :  write regex for date (DD/MM/YYYY)

DateRegex = re.compile(r'''(
    ([0-2][1-9]|[1-3][0-1])             # date regex
    /                                   # separator
    ([0][1-9]|[1][0-2])                 #month
    /                                   # separator
    ([1-2][0-9][0-9][0-9]))              # year
    ''',re.VERBOSE)


text = "My date of birth is 04/08/1997. Also, today's date is 18/08/2022. There are some non-possible dates like 31/06/2001. Also, 29/02/2001 is impossible."
dates = []
months = []
years = []


    




#TODO :  store the date,month and year string into separate variables
for groups in DateRegex.findall(text):
    dates.append(groups[1])
    months.append(groups[2])
    years.append(groups[3])

print(dates)
print(months)
print(years)


#TODO :  perform validity check - correct number of days, leap year etc

def check_validity(dates, months, years):
    for i in range(len(dates)):
        is_valid = False
        if isleapyear(years[i]):
            if int(months[i]) == 2:
                if 1<=int(dates[i])<=29:
                    is_valid=True
                
        else:
            
            if int(months[i]) == 2:
                
                if 1<=int(dates[i])<=28:
                    
                    is_valid=True
                
        
        if months[i] in ['04','06','09','11']:
            if 1<=int(dates[i])<=30:
                is_valid=True
            
        elif months[i] in ['01','03','05','07','08','10','12']:
            if 1<=int(dates[i])<=31:
                is_valid=True

        if is_valid:
            print("The date "+dates[i]+"/"+months[i]+"/"+years[i]+" is valid")
        else:
            print("The date "+dates[i]+"/"+months[i]+"/"+years[i]+" is not valid")


check_validity(dates, months, years)
            

