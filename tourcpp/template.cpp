template<typename T>
class Vector{
private:
T* elem;
int sz;
public:
explicit Vector(int s); //no implicit type conversion allowed for e.g vector to int
~Vector(int s){delete[] elem;}

T& operator[](int i);
const T& operator[](int i) const;

int size() const {return sz;}
};
template<typename T>
Vector<T>::Vector(int s)
{
if(s<0)
throw Negative_size{};

elem = new T[s];
sz = s;
}
template<typename T>
const T& Vector<T>::operator[](int i){
if(i<0 || size()<=i)
throw out_of_range{"Vector::operator[]"};
return elem[i];
}

//range-for loop requries definitions of begin() and end() function.
template<typename T>
T* begin(Vector<T>& x){
return x.size() ? &x[0] : nullptr;
}

template<typename T>
T* end(Vector<T>& x){
return begin(x)+x.size();
}

//definitions of vectors of different data types:

Vector<char> vc(200);
Vector<string> vs(17);
Vector<list<int>> vli(45);

//given begin() and end() for Vector class, range-for loop could be used

void f2(Vector<string>& vs){
for(auto& s:vs)
std::cout << s << '\n';
}


//function template

template<typename Container, typename Value>
Value sum(const Container& c, Value v){
for (auto x : c)
v+=x;
return v;

}


void user(Vector<int>& vi,std::list<double>& li, std::vector<complex<double>>& vc){
int x = sum(vi,0);
double d = sum(vi,0.0);
double dd = sum(ld,0.0);
auto z = sum(vc, complex<double>{}); //sum of vector of complex<double>


//function objects

template<typename T>
class Less_than{
const T val;

public:
Less_than(const T& v) : val{v} {}
bool operator()(const T& x) const {return x < val;}
};
//the argument pred passed here to algorithm is a function object , functor. 
template<typename C, typename P>
int count(const C& c, P pred){
int cnt = 0;
for(const auto& x : c)
{if(pred(x))
++cnt;
}
return cnt;
}

//Usage

void f(const Vector<int>& vec, int x){
cout << "The number of values less than " << x << ": " << count(vec, Less_than<int>{x}) ;
}
// Less_than<int>{x} is an object of class Less_than which is passed here as an argument.
// It has () operator overloaded, meaning it is used as function object.

//Lambda expression : Used to simplify this instead of writing a separate class
void flamb(const Vector<int>& x, int x){
cout << "The number of values less than " <<x << ": " << count(vec, [&](int a){return a < x;} << '\n';
}






