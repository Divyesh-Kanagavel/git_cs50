import random
import time

random_array = []


N = 100000
used_array = [False]*N
start_time=time.time()


while(len(random_array)!=N):
    i = random.randint(0,N-1)
    if used_array[i] == False:

        
        random_array.append(i)
        used_array[i]=True

print(time.time()-start_time)


#print(random_array)