class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
    vector <int> time;
    for(const string& tm :timePoints)
    {
        int hours = (tm[0] - '0') * 10 + (tm[1] - '0');
    int minutes = (tm[3] - '0') * 10 + (tm[4] - '0');
    time.push_back(hours * 60 + minutes);
    }      
    int min =1440;
    std::sort(time.begin(), time.end());
    for(int i=1; i< time.size(); i++)
    {
        if(time[i] -time[i-1] < min) min =time[i] -time[i-1];
    }


    int wrapAroundDiff = (1440 - time.back()) + time[0];
        if (wrapAroundDiff < min) {
            min = wrapAroundDiff;
        }
    return min;
    }
};