class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int sum = 0; 

        for(int i = 0; i < batteryPercentages.size(); i++) {
            if(batteryPercentages[i] - sum > 0) {
                sum++; 
            }
        }
        
        return sum;
    }
};