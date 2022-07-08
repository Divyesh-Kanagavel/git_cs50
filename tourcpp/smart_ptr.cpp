// smart pointers - intended to avoid resource leaks unnoticed.
std::unique_ptr<Shape> read_shape(istream& is){
switch(k){
case Kind::circle:
return std::unique_ptr<Shape>{new Circle{p,r}};
case Kind::triangle:
return std::unique_ptr<Shape>{new Triangle{p,a}};//enum class comes from previous programs

}

void user(){
vector<unique_ptr<Shape>> v;
while(cin)
v.push_back(read_shape(cin));

//functions on the vector

} 

//When this function goes out of scope, we have created new shapes, some of which may not have deallocated , but with unique_ptr, these are destroyed when function goesout of scope


