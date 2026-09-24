class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        std::sort(boxTypes.begin(), boxTypes.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] > b[1];
        });


        int totalUnits =0;
        for (const auto& box : boxTypes) {
            int count = box[0];
            int units = box[1];

            int take = std::min(truckSize, count);
            
            totalUnits += take * units;
            truckSize -= take;

            if (truckSize == 0) {
                break;
            }
        }

        return totalUnits;
    }
};