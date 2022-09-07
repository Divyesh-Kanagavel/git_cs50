#include <iostream>
using namespace std;

int number_ones(int N){
    if (N==0)
    return 0;

    if (N%2 == 0)
    return number_ones(N/2);
    else if (N%2!=0)
    return number_ones(N/2)+1;
}


int main(){
    int num;
    cout << "enter a positive number" << endl;
    cin >> num;

    cout << "the number of ones in the binary representation of " << num << " is: " << number_ones(num) << endl;
    return 0;
}