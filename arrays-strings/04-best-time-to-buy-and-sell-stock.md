## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I kept track of the minimum price seen so far and calculated the profit for each price.
I updated the maximum profit whenever a better profit was found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution returns 0 when no profitable transaction is possible.