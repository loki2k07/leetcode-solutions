## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a nested loop to check every possible pair of elements.
If the sum of two elements is equal to the target, their indices are printed.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution also handles duplicate values, such as [3,3] with target 6.