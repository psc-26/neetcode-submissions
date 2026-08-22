class Solution {
public:
    bool isPalindrome(string s) {

        string p = "";
        for(int i = 0; i < s.length(); i++){
            
            if(isalnum(s[i])){
                p += tolower(s[i]);
            }
        }
        
        string rev_p = p;
        reverse(rev_p.begin(), rev_p.end());
        
        if( p == rev_p){
            return true;
        }else{
            return false;
        }
    }
};
