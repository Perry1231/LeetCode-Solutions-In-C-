class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> letter = {2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3, 3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3};
        vector <string> res;
        int size = words.size();          //Count of words
        for(int i=0; i<size; i++)
        {
            int firstChar = tolower(words[i][0]);  //Init fisrts letter as num and make lower
            int firstLetterRow = letter[firstChar - 'a'];
            int size1 = words[i].size();        //Count letters in each word

            bool isValid = true;
            for(int j=1;j<size1; j++)
            {

                char currentChar = tolower(words[i][j]);
                int currentRow = letter[currentChar - 'a'];
                if( currentRow != firstLetterRow )  {isValid = false; break; }
                //Compare next letters
            }
                if (isValid) 
            {
                res.push_back(words[i]);
            }

        }
        return res;
    }
};