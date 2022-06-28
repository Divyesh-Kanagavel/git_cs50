//class for complex numbers...
class complex{
	double re,im;
	public:
		complex(double r,double i): re{r},im{i} {}
		complex(double r): re{r},im{0.0} {}
		complex(): re{0.0}, im{0.0} {}
		
		double real() const {return re;}
		double imag() const {return im;}
		
		void real(double d) { re = d;}
		void imag(double d) {im = d;}

		complex& operator-=(complex z){re-=z.re; imag-=z.imag; return *this;}
		complex& operator*=(complex z){re*=z.re; imag*=z.imag; return *this;}
		complex& operator/=(complex z){re/=z.re; imag/=z.imag; return *this;}
		
		};
		
		
		complex operator+(complex a, complex b){return a+=b;}
		complex operator-(complex a, complex b){return a-=b;}
		complex operator*(complex a, complex b){return a*=b;}
		complex operator/(complex a, complex b){return a/=b;}
		
		complex operator-(complex a){ return {-a.real(), -a.imag()};}
		
		bool operator==(complex a, complex b){ return a.real()==b.real() && a.imag()==b.imag();}
		
		bool operator!=(complex a, complex b){
		return !(a==b);
		}
		
		complex sqrt(complex);
		
