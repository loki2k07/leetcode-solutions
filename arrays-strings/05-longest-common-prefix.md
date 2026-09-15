## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared the characters of all strings from left to right.
When a character was different, I stopped and returned the common part found so far.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

Tested with a normal case and an edge case where there is no common prefix.