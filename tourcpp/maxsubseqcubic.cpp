// function to compute maximum sum of subsequence in an array of integers
//this algorithm has worst time complexity of O(N^3)

int maxSubSum1(const vector<int>& a){
    int maxSum = 0;

    for(int i=0;i<a.size();i++){
        for(int j=i;j<a.size();i++){
            int thisSum = 0;

            for(int k=i;k<=j;k++)
            thisSum+=a[k];

            if (thisSum > maxSum)
            maxSum = thisSum;
        }
    }

    return maxSum;
}