#include <stdio.h>

int main() {
    int nums[] = {1, 3, 5, 7, 9, 11};
    int n = 6;
    int target = 2;

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            break;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("%d\n", result);

    /*
    Test Case 1:
    Input: nums = [1,3,5,7,9,11], target = 7
    Output: 3

    Test Case 2 (edge case):
    Input: nums = [1,3,5,7,9,11], target = 2
    Output: -1
    */

    return 0;
}