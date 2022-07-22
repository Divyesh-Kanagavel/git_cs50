def bin_ones(num):
	count = 0
	for j in bin(num):
		if j == '1':
			count+=1
			
	return count
	

def good_pairs(list_num):
	count = 0
	for i in range(1, len(list_num):
		for j in range(i):
			if bin_ones(list_num[i]) == bin_ones(list_num[j]):
				count+=1
				
	return count
	
	
