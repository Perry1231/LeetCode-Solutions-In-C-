class Solution {
public:
    bool hasAlternatingBits(int n) {
        if (n == 0) return {0}; 
    
    std::vector<int> bits;
    while (n > 0) {
        bits.push_back(n % 2); 
        n /= 2;                
    }

    for(int i=0; i<bits.size()-1; i++)
    {
        if(bits[i] == bits[i+1]) return false;
    }
    return true;
    }
};