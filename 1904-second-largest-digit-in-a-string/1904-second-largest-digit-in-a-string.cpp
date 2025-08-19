class Solution {
public:
    int secondHighest(string s) {
        // int largest = INT_MIN;
        // int second = INT_MIN;
        // for(int i=0;i<s.length();i++){
        //     if(s[i]>largest){
        //         largest=s[i];
        //         second=largest;
        //     }else if(s[i]>second && s[i]<largest){
        //         second = s[i];
        //     }
        // }
        // return second==INT_MIN ? -1 : second;
        int largest = -1;
    int second = -1;

    for (int i = 0; i < s.length(); i++) {
        if (!isdigit(s[i])) continue;  // ignore non-digits
        int digit = s[i] - '0';

        if (digit > largest) {
            second = largest;
            largest = digit;
        } else if (digit > second && digit < largest) {
            second = digit;
        }
    }

    return second;
    }
};