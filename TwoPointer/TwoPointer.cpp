#include <iostream>
#include <vector>

using namespace std;  // Using the std namespace

vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return {left, right};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15,2 };
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (result.size() == 2) {
        cout << "Indices of the two numbers: " << result[0] << " and " << result[1] << endl;
        cout << "Numbers: " << nums[result[0]] << " and " << nums[result[1]] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
