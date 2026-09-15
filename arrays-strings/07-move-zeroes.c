#include <stdio.h>

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = 5;

    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill remaining positions with zeros
    while (position < n) {
        nums[position] = 0;
        position++;
    }

    // Print result
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

    /*
    Test Case 1:
    Input:  [0, 1, 0, 3, 12]
    Output: [1, 3, 12, 0, 0]

    Test Case 2 (Edge Case):
    Input:  [0, 0, 0]
    Output: [0, 0, 0]
    */

    return 0;
}