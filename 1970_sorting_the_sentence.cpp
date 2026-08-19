class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10); 
        
        stringstream ss(s); 
        string word;
        int wordCount = 0; 
        
        while (ss >> word) { 
                        int pos = word.back() - '0'; 
                        word.pop_back(); 
                        words[pos - 1] = word; 
            wordCount++;
        }
        
        string result = "";
        for (int i = 0; i < wordCount; i++) {
            result += words[i];
            if (i < wordCount - 1) {
                result += " "; 
            }
        }
        
        return result;
    }
};