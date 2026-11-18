class Solution {
public:
    string countAndSay(int n) {
     string result = "1";
        
        for (int i = 1; i < n; i++) {
            string nextTerm = "";
            int len = result.length();
            
            for (int j = 0; j < len; j++) {
                int count = 1;
                while (j + 1 < len && result[j] == result[j + 1]) {
                    count++;
                    j++;
                }
                nextTerm += to_string(count) + result[j];
            }
            
            result = nextTerm;
        }
        
        return result;
}
};