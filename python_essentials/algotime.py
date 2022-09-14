import time

start_time = time.time()
sum=0
N = 100
for i in range(N):
    for j in range(i*i):
        for k in range(j):
            sum=sum+1
        
    

print(time.time()-start_time)