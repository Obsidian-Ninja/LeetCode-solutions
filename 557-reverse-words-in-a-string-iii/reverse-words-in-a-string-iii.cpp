class Solution {
public:
    string reverseWords(string s) {
     string ans,ss;
     for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            ss+=s[i];
        }
        else{
            reverse(ss.begin(),ss.end());
            ans+=ss;
            ans+=' ';
            ss.clear();
        }
     } 
     reverse(ss.begin(),ss.end());
     ans+=ss;  
     return ans;
    }
};