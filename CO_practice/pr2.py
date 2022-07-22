def count_multiples(string):
	list_substr = [string[i:j] for i in range(len(string)) 
			for j in range(i+1, len(string)+1)]
	count = 0
			
	for i in list_substr:
		if i[0] == '0' and len(i) > 1:
			continue
		temp = int(i)
		if temp%3 == 0:
			count+=1
			
	
	return count
	
print(count_multiples("103"))
	


