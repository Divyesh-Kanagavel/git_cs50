import math

def factorial(n):
    if n==0:
        return 1

    return n*factorial(n-1)


def estimate_pi():
    sum=0
    k=0
    while True:
        t = (factorial(4*k)*(1103+26390*k))/((factorial(k)**4) * (396**(4*k)))
        if t <= 1e-15 :
            break

        sum+=t

        k+=1

    return 9801/(2*math.sqrt(2)*sum)


print(estimate_pi())
print(math.pi)
