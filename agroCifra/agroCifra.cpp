class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int counter = arr.size();
        for (int num : arr) {
            for (int i = 0; i < arr.size(); i++) {
                for (int j = 0; j < arr.size(); j++) {
                    if ((arr[j] * arr[i]) == num) {
                        counter++;
                    }
                }
            }
        }
        return counter;
    }
};