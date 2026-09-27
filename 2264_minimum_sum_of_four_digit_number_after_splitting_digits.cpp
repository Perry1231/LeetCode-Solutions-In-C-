class Solution {
public:
    int minimumSum(int num) {
        vector <int> temp;
    
        while(num > 0)
        {
            int temp1=0;
            temp1 =num % 10;
            temp.push_back(temp1);
            num /=10;
        }
        std::sort(temp.begin(), temp.end());

        int new1 = temp[0] * 10 + temp[2];
        int new2 = temp[1] * 10 + temp[3];
        
        return new1 + new2;
    }
};