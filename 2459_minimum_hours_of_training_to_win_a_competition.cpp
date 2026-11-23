class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int hours = 0;
        int n = energy.size();

        for (int i = 0; i < n; ++i) {
            if (initialEnergy <= energy[i]) {
                int needed = energy[i] - initialEnergy + 1;
                hours += needed;
                initialEnergy += needed;
            }
            initialEnergy -= energy[i];

            if (initialExperience <= experience[i]) {
                int needed = experience[i] - initialExperience + 1;
                hours += needed;
                initialExperience += needed;
            }
            initialExperience += experience[i];
        }

        return hours;
    }
};