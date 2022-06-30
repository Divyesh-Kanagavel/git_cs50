class Container(){
public:
virtual double& operator[](int) = 0;
virtual int size() = 0;
virtual ~Container() {};
};
// an abstract class which could be used as a base class for containers like vectors etc
// = 0 means that it is a pure virtual function and the function must be implemented in the derived class.


