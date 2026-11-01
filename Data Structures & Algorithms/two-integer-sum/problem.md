# Two Sum

**Difficulty:** Easy
**Source:** https://leetcode.doocs.org/en/lc/1/ (LeetCode 1; NeetCode/LeetCode pages unavailable)

## Problem

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers that add up to `target`. Each input has exactly one solution, and the same element cannot be used twice. The answer can be returned in any order.

Follow-up: can you come up with an algorithm faster than O(n^2) time?

## Examples

1. Input: `nums = [2,7,11,15]`, `target = 9`
   Output: `[0,1]`
   Explanation: nums[0] + nums[1] == 9.
2. Input: `nums = [3,2,4]`, `target = 6`
   Output: `[1,2]`
3. Input: `nums = [3,3]`, `target = 6`
   Output: `[0,1]`

## Constraints

- 2 <= nums.length <= 10^4
- -10^9 <= nums[i] <= 10^9
- -10^9 <= target <= 10^9
- Only one valid answer exists.
