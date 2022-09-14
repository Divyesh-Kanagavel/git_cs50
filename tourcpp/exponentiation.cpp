// exponentiation through recursion -> much much effiecient compared to repeated multiplications
#include <iostream>
using namespace std;
long long pow(long long x, int n){
    if (n==0)
    return 1;
    

    if (n%2==0){
        return pow(x*x,n/2);

    }
    else
    return pow(x*x,n/2)*x;
}


int main(){

    cout << pow(2,4) << endl;
    return 0;

}