class Solution {
public:
    double average(vector<int>& salary) {
        auto max = std::max_element(salary.begin(), salary.end());
        auto min = std::min_element(salary.begin(), salary.end());
        double sum=0;
        for(int i=0; i<salary.size(); i++)
        {
            if(salary[i] == *max || salary[i] == *min) continue;
            else sum += salary[i];
        }
        sum = sum / (salary.size() -2);
        return sum;
    }
};