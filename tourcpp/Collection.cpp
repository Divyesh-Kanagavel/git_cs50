#include <iostream>
#include <vector>

using namespace std;

template <typename Object>

class Collection{

    Collection(const vector<Object>& a, int size) : cur_size {size};
    {
        arr = a;

        
        
            }

    bool isEmpty(){
        return (cur_size == 0);
    }

    void makeEmpty(){
        arr = {};
        cur_size = 0;
    }

    void insert(int x){
        arr.push_back(x);
        cur_size+=1;
    }

    void remove(){
        arr.pop_back();
        cur_size-=1;
    }

    bool contains(x){
        for(const auto& el : arr){
            if (el == x)
            return true;
        }

        return false;

    }
 


    private:
    vector<Object> arr;
    int cur_size;

};