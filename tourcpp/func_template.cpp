#include <iostream>
#include <vector>
using namespace std;

template <typename Comparable>
const Comparable& findMax(const vector<Comparable>& a){
    int maxIndex = 0;

    for(int i=0;i<a.size();++i){
        if(a[maxIndex] < a[i])
        maxIndex = i;


    }

    return a[maxIndex];


}


int main()
{
    vector<int> v1(5);
    vector<double> v2(4);

    v1 = {21,98,34,76,11};
    v2 = {1.9,78.34,90.09,14.54};

    cout << findMax(v1) << endl;
    cout << findMax(v2) << endl;

    return 0;
}