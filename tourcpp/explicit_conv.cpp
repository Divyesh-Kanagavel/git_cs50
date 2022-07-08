class Vector{
public:
explicit Vector(int s); // constructor from int to Vector - no implicit conversion from int to vector allowed

// for example

Vector i = 7; //if explicit is not mentioned , this will create a vector of 7 elements

Vector(const Vector&a) = default; // this becomes the default constructor

//delete operation

class Shape{
public:
Shape(const Shape&) = delete;
Shape& operator=(const Shape&)=delete;

Shape(Shape&&) = delete;

~Shape();
}

//used to suppress the base class move operations as derived classes might have more members
