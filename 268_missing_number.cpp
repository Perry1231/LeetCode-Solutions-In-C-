#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdlib>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        for(int i =0; i < size; i++)
        {
            auto it = std::find_if( nums.begin(), nums.end(), isdigit );

            if ( it != nums.end() ) n = std::atoi( nums.c_str() + ( it - nums.begin() ) ) return it;
        }
        return 0;
    }
};