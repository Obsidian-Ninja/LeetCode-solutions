class Solution {
public:
    string removeDuplicates(string s) {
    int i=0;
    while(i<s.length()){
        if(i<s.length()-1 && i>=0){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                i-=2;
            }
        }
        i++;
        if(i<0){
            i=0;
        }
    }
    cout<<i;
    return s;
    }
};