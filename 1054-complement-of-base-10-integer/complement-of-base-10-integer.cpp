class Solution {
public:
    int bitwiseComplement(int n) {
    if(n==0){
        return 1;
    }
    int mask=0;
    int m=n;
    while(m!=0){
        mask=(mask<<1);
        mask=mask|1;
        m=m>>1;
    }
    return (~n)&mask;
    }
};