import turtle

ravi = turtle.Turtle()

def koch(t,length):
    if length<=3:
        t.fd(length)
        return

    koch(t,length/3)
    t.lt(60)
    koch(t,length/3)
    t.rt(120)
    koch(t,length/3)
    t.lt(60)
    koch(t,length/3)



koch(ravi,100)
