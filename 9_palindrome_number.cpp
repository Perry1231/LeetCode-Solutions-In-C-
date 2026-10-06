class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        std::string s = std::to_string(x);              //Reverse num
        std::reverse(s.begin(), s.end()); 
        long long y = std::stoll(s);   

    return x==y;
    }
};