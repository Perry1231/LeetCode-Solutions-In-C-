class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() == 2) return std::min(height[0], height[1]);

        int max=0;
        int left=0, right =height.size()-1;
        while (left < right)
        {
            int temp = std::min(height[left], height[right]) * (right - left);
            if(temp > max) max = temp;

            if(height[left] < height[right])
        {
            left++;
        }
        else{
            right--;
        }
        }

return max;
    }
};