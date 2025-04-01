#include <vector>
#include <algorithm>
#include <unordered_map>
class Solution {
public:
    int numFactoredBinaryTrees(std::vector<int>& arr) {
        const int MOD = 1e9 + 7;
        std::sort(arr.begin(), arr.end());
        std::unordered_map<int, int> index;
        std::unordered_map<int, long long> trees;

        for (int num : arr) {
            trees[num] = 1;
        }

        for (int i = 0; i < arr.size(); i++) {
            index[arr[i]] = i;
        }

        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                if (arr[i] % arr[j] == 0) {
                    int factor = arr[i] / arr[j];
                    if (index.count(factor)) {
                        trees[arr[i]] = (trees[arr[i]] + trees[arr[j]] * trees[factor]) % MOD;
                    }
                }
            }
        }
        int sum;
        for (auto [ind, num] : trees) {
            sum = (sum + num) % MOD;
        }
        return sum;
    }
};