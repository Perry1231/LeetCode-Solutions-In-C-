class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
    std::unordered_map<char, int> baseCount;
    for (char c : chars) {
        baseCount[c]++;
    }

    int totalLength = 0;

    for (const std::string& word : words) {
        std::unordered_map<char, int> tempCount = baseCount;
        bool canForm = true;

        for (char c : word) {
            if (tempCount[c] > 0) {
                tempCount[c]--;
            } else {
                canForm = false; 
                break;
            }
        }

        if (canForm) {
            totalLength += word.length();
        }
    }

    return totalLength;
}
};