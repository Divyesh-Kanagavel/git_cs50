import math
def mysqrt(num):
	x = num/2
	while True:
	
		y = (x+num/x)/2
		epsilon = 0.0000001
		if abs(y-x) < epsilon:
			break
		x = y

	return x

def test_square_root(n):

	print("a   mysqrt(a)            math.sqrt(a)          diff      ")
	print("-   --------             -----------          -----      ")
	i=1
	while(i<=n):
		print(i,end="    ")
		print(mysqrt(i),end=" ")
		print(math.sqrt(i),end=" ")
		print(mysqrt(i)-math.sqrt(i))
		i=i+1




test_square_root(9)




