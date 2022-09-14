// given a sorted array, finds the given element in O(logN) 
//binary search
#include <string>
template <typename Comparable>
int NOT_FOUND = -1;

int binary_search(const vector<Comparable>& a,const Comparable& x){
    int low = 0,high=a.size()-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]<x)
        low=mid+1;
        if(a[mid] > x)
        high = mid-1;
        else
        return mid;
    }
    return NOT_FOUND;
} 