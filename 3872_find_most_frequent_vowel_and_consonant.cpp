class Solution {
public:
    int maxFreqSum(string s) {
    int count[26] = {0};
        for (char c : s) {
    count[c - 'a']++;
        }

    
  
    
    int maxVowel = 0;
    int maxConsonant = 0;

for (int i = 0; i < 26; i++) {
    char c = i + 'a'; 

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        maxVowel = std::max(maxVowel, count[i]);
    } else {
        maxConsonant = std::max(maxConsonant, count[i]);
    }
}
    int res=maxVowel + maxConsonant;
    return res;
    }
};