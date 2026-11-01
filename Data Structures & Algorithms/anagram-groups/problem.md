# Group Anagrams

**Difficulty:** Medium
**Source:** https://leetcode.doocs.org/en/lc/49/ (LeetCode 49; NeetCode/LeetCode pages unavailable)

## Problem

Given an array of strings `strs`, group the anagrams together. You can return the answer in any order.

## Examples

1. Input: `strs = ["eat","tea","tan","ate","nat","bat"]`
   Output: `[["bat"],["nat","tan"],["ate","eat","tea"]]`
   Explanation:
   - No other string in `strs` can be rearranged to form "bat".
   - "nat" and "tan" are anagrams of each other.
   - "ate", "eat", and "tea" are anagrams of each other.
2. Input: `strs = [""]`
   Output: `[[""]]`
3. Input: `strs = ["a"]`
   Output: `[["a"]]`

## Constraints

- 1 <= strs.length <= 10^4
- 0 <= strs[i].length <= 100
- strs[i] consists of lowercase English letters.
