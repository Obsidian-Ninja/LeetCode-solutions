class Solution {
public:
    int mySqrt(int x) {
    if(x==1){
        return x;
    }
    int s=0,e=x;
    int ans=1;
    while(s<=e){
        int mid=(s+e)/2;
        if(mid!=0 && mid>x/mid){
            e=mid-1;
        }
        else if(mid!=0 && mid<x/mid){
            ans=mid;
            s=mid+1;
        }
        else{
            return mid;
        }
    }    
    return ans;
    }
};