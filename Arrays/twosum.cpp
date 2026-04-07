#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> twoSum(vector<int>& arr, int target) {
    
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {arr[left], arr[right]};
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return {-1, -1}; 
    
}


