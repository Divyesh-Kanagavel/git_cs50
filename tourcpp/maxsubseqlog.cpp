// NLogN time complexity to compute maximum sum of subsequence
int max3(int a,int b,int c){
    return (a>b) ? ((c>a)?c:a):((c>b)?c:b);
}
int maxSumrec(const vector<int>& a, int left, int right){
    if(left == right){
        if (a[left] > 0)
        return a[left];
        else
        return 0;
    }

    int centre = (left+right)/2;
    int maxLeftSum = maxSumrec(a, left, centre);
    int maxRightSum = maxSumrec(a, centre+1,right);

    int maxleftbordersum = 0,leftbordersum = 0;

    for(int i=centre;i>=left;--i){
        leftbordersum+=a[i];
        if (leftbordersum>maxleftbordersum)
        maxleftbordersum=leftbordersum;
        
    }

    int maxrightbordersum=0,rightbordersum=0;

    for(int i=centre+1;i<=right;++i){
        rightbordersum+=a[i];
        if(rightbordersum>maxrightbordersum)
        maxrightbordersum=rightbordersum;

    }
    return max3(maxLeftSum,maxRightSum,maxleftbordersum+maxrightbordersum);
    
}

int maxSumSub3(const vector<int>&a){
    return maxSumrec(a,0,a.size()-1);
}