#One of the first examples illustrating that total computable functions could be non-primitive recursive

def ack(m,n):
    if m==0:
        return n+1

    if m>0 and n==0:
        return ack(m-1,1)

    if m>0 and n>0:
        return ack(m-1,ack(m,n-1))

print(ack(4,2))
