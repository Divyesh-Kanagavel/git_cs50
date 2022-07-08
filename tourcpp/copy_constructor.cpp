// a vector example with copy constructor and copy assignment operator

class Vector{
private:
double* elem;
int sz;

public:
Vector(int s);
~Vector() { delete[] elem;} // destructor to deallocate memory

Vector(const Vector& a); // copy constructor
Vector& operator=(const Vector& a); // copy assignment
Vector(Vector&& a); // move constrctir
Vector& operator=(Vector&& a); //move assignment , move the vector instead of copying

double& operator[](int i);
const double& operator[](int i) const;

int size() const;

};

Vector::Vector(const Vector& a) : elem{new double[a.sz]},sz{a.sz}
{
for (int i=0;i!=sz;i++)
elem[i] = a.elem[i];
}

Vector& Vector::operator=(const Vector& a){
double* p = new double[a.sz];
for(int i=0;i!=a.sz;++i)
p[i] = a.elem[i];

delete[] elem;
elem = p;
sz = a.sz;
return *this;
}

