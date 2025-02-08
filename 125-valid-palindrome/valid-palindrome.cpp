class Solution {
public:
    bool isPalindrome(string s) {
    string ans;
    for(int i=0;i<s.length();i++){
        if(isalnum(s[i])){
            char ch=tolower(s[i]);
            ans+=ch;
        }
    }   
    string st=ans;
    reverse(ans.begin(),ans.end());
    return st==ans;
    }
};