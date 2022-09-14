// check if a[i] == i in a strictly increasing array 
// easy approach with O(N) -> search through the array and determine if such a number exists

// test array : {-6,-1,0,2,4,7,9,11,15,19}   a[4] = 4 , so we should find 4

#include <iostream>
#include <vector>
using namespace std;
int same_index_search(const vector<int>& a){

    int low = 0;
    int high = a.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if (a[mid] < mid)
        low = mid+1;
        if (a[mid] > mid)
        high = mid-1;
        else
        return mid;
    }

    return -1;

    




}

int main()
{
    vector<int> arr {-6,-1,0,2,4,7,9,11,15,19};

    int ind = same_index_search(arr);
    if (ind==-1){
    cout << "There is no such index" << endl;
    return 0;
    }
    else
    cout << "The matched index is " << ind << endl;;

    return 0;
}