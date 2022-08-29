#include <iostream>
#include <vector>
#include <algorithm>

void insert(std::vector<int>& v, int n){

    v.push_back(n);
    

    std::sort(v.begin(), v.end());
    v.pop_back();
}

int main(){
    int N = 10;
    int k = 5;

    std::vector<int> v = {21,89,7,34,78,90,54,77,26,66};

    std::vector<int> res(k);

    for(int i=0;i<k;i++){
        res[i] = v[i];
    }
    std::sort(res.begin(),res.end());

    for(int i=k;i<N;i++ ){
        if(v[i]<res[k-1])
        insert(res,v[i]);
        
    }

    for(const auto& i:res)
    std::cout << i << ' ' << std::endl;

    return 0;


    
    

    


    }