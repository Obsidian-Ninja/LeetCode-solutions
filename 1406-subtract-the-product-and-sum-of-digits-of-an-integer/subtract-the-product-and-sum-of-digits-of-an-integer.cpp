class Solution {
public:
    int subtractProductAndSum(int n) {
        int x=n, y=n;
        int sum=0, product=1;
        while(x!=0){
            product*=(x%10);
            x/=10;
        }

        while(y!=0){
            sum+=(y%10);
            y/=10;
        }
        return product-sum;
    }
};