class Solution {
public:
    bool isPalindrome(string s) {
        string lowStr;
        stringstream ss;
       for(auto it: s){
        lowStr +=tolower(it);
       }  
       for(auto it : lowStr) {
            if(isalnum(it)) {
                ss<< it;
            }
        }
        string finStr=ss.str();
        int left=0;
        int right=finStr.length()-1;
        while(left<right){
            if(finStr[left]!=finStr[right]){
                return false;
            }
            left++;
            right--;
        } 
        return true; 
    }
};