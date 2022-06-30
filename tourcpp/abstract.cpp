class Container(){
public:
virtual double& operator[](int) = 0;
virtual int size() = 0;
virtual ~Container() {};
};
// an abstract class which could be used as a base class for containers like vectors etc
// = 0 means that it is a pure virtual function and the function must be implemented in the derived class.

//hierarchies

class Shape{
    public:
    virtual Point center() const = 0; // pure virtual function
    virtual void move(Point) = 0;
    virtual void draw() const = 0;
    virtual void rotate(int angle) = 0;
    virtual ~Shape(){}

};

class Circle : public Shape{
    public:
    Circle(Point p, int rr);
    Point center() const {return x;}
    void move(Point to){x = to;}

    void draw() const;
    void rotate(int) {}
    private:
    Point x;
    int r;
};

class Smiley: public Circle{
    public:
    Smiley(Point p, int r) : Circle(p,r), mouth{nullptr} {}

    ~Smiley() override
    {
        delete mouth; // delete the shape in the destructor
        for(auto p:eyes) // delete the eyes of type Shape
        delete p;
    }


// void move() override
// void draw()

void add_eye(Shape* s){ eyes.push_back(s);}

private:
Vector<Shape*> eyes;
Shape* mouth;
};

