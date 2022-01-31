import turtle
import math
bob = turtle.Turtle()

def polyline(t, n, length, angle):
    """Draws n line segments.
    t: Turtle object
    n: number of line segments
    length: length of each segment
    angle: degrees between segments
    """
    for i in range(n):
        t.fd(length)
        t.lt(angle)


def polygon(t, n, length):
    """Draws a polygon with n sides.
    t: Turtle
    n: number of sides
    length: length of each side.
    """
    angle = 360.0/n
    polyline(t, n, length, angle)


def arc(t, r, angle):
    """Draws an arc with the given radius and angle.
    t: Turtle
    r: radius
    angle: angle subtended by the arc, in degrees
    """
    arc_length = 2 * math.pi * r * abs(angle) / 360
    n = int(arc_length / 4) + 3
    step_length = arc_length / n
    step_angle = float(angle) / n

    # making a slight left turn before starting reduces
    # the error caused by the linear approximation of the arc
    t.lt(step_angle/2)
    polyline(t, n, step_length, step_angle)
    t.rt(step_angle/2)

def circle(t, r):
    """Draws a circle with the given radius.
    t: Turtle
    r: radius
    """
    arc(t, r, 360)

def deg2rad(angle):
    return angle*math.pi/180.0

def pie(t,n,length):
    angle = 360.0/n
    angle_int = 90.0-angle/2.0
    length_int = length*math.sin(deg2rad(angle_int))/math.sin(deg2rad(angle))


    for i in range(n):
        t.lt(angle)
        t.fd(length)
        t.lt(angle+angle_int)
        t.fd(length_int)
        t.lt(180-angle)
        t.fd(length_int)
        t.lt(angle+angle_int)
        t.fd(length)



def petal(t, r, angle):
    for i in range(2):
        arc(t,r,angle)
        t.lt(180.0-angle)

def flower(t,n,r,angle):
    for i in range(n):
        petal(t,r,angle)
        t.lt(360/n)


flower(bob,20,140.0,20.0)



turtle.mainloop()
