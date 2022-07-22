def sum_alternate(num):
	temp_num = num
	list_nums = []
	while temp_num!=0:
		temp_rem = temp_num % 10
		list_nums.append(temp_rem)
		temp_num = temp_num // 10
		
	list_nums.reverse()
	#print(len(list_nums))
	
	sum_list = 0
	j = 0
	while j<len(list_nums):
		if j%2 == 0:
			sum_list += list_nums[j]
		else:
			sum_list -= list_nums[j]
		
		j=j+1
			
	return sum_list
	
	
num = 1234567
print(sum_alternate(num))

	
	
