class Shape{
public:
//constructor not defined here as this is an abstract class
virtual Point center() const = 0; //pure virtual function
virtual void moveto(Point t) = 0;

virtual void draw() const = 0;
virtual void rotate(int angle) = 0;

virtual ~Shape() {}

};


class Cirlce : public Shape{
public:
Circle(Point p, int rr);
Point center() const {return x;}
void move(Point t){x=t;}
void draw() const ;
void rotate(){}

private:
Point x;
int r;
};

class Smiley : public Circle{
public:
Smiley(Point p, int r): Circle{p,r}, mouth{nullptr}{}

~Smiley()
{
delete mouth;
for(auto p:eyes)
delete p;
}

//other functions defined as per requirements
void moveto(Point t) override;
void rotate(int) override;
void add_eye(Shape* s){eyes.push_back(s);}
void set_mouth(Shape* s);

private:
vector<Shape*> eyes;
Shape* mouth;
};


void Smiley::draw()
{
Circle::draw();
for(auto p:eyes)
p->draw();

mouth->draw();
}


//example on how these classes work together

enum class Kind { circle , triangle, smiley};

Shape* read_shape(istream& is){ // the input shape can be defined of type Shape*
switch(is){
case Kind::circle:
return new Circle{p,r};
case Kind::triangle:
return new Triangle{p1, p2, p3};
case Kind::smiley:
Smiley* ps = new Smiley{p,r};
ps->add_eye(e1); // assume functions have been declared inside smiley class
ps->add_eye(e2);
ps->add_mouth(m);
return ps;
}
}

void user()
{
std::vector<Shape*> v;
while(cin){
v.push_back(read_shape(cin));



for(auto p:v){
delete p;
// destructor not defined inside shape class
//delete allocated memory
}

//dynamic cast
Shape* ps{read_shape(cin)); // a shape read in - could be triangle circle, smiley
if(Smiley* p = dynamic_cast<Smiley*>(ps)){
...
}
else{}

}




