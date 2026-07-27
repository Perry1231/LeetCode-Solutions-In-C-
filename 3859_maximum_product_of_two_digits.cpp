class Solution {
public:
    int maxProduct(int n) {
        int size =0;
        int arr[10];
        while(n > 0)
        {
            arr[size] = n%10;
            n=n/10; size++;
        }

        int max1=0, max2=0;
        for (int i=0; i<size; i++)
        {
            if (arr[i] > max1 ) max2 = max1, max1 = arr[i];
            else if (arr[i] >= max2 && arr[i] <= max1) max2 = arr[i];
        }
        return max1 * max2;
    }
};