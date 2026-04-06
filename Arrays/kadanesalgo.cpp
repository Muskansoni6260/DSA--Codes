#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int maxsum = INT_MIN;

    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        maxsum = max(maxsum, sum);   // important

        if(sum < 0) {
            sum = 0;
        }
    }

    return maxsum;
}

int main() {
    vector<int> nums = {-2, -3, -1};

    cout << maxSubArray(nums);

    return 0;
}