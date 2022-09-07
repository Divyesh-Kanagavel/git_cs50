#include <iostream>

using namespace std;

void printDigit(int a){
    if (a < 10){
    cout << a << " ";
    return;
    }

    printDigit(a/10);

    cout << a%10 << " ";





}

void print_double(int number, double fractional){
    printDigit(number);
    cout << ". ";
    
    
    printDigit(frac);
}

int main()
{
    double a,frac;
    int num;

    cout << "Enter a number" << endl;

    cin >> a;

    num = static_cast<int>(a);

    frac = a - num;

    print_double(num,frac);

    
    

    return 0;




    
}