# Notes: Valid Anagram

## Approach

**Submission 0 — sort both**
- Sort `s` and `t`, compare for equality. Same letters with same counts ⇒ equal after sorting.

## Time / Space Complexity

- Time: O(n log n + m log m).
- Space: O(1) extra (strings passed by value, sorted in place on copies; sort itself ~O(log n) stack).
- Alternative: 26-size count array → O(n + m) time, O(1) space. Early return if lengths differ.

## Mistakes / Things to Remember

- Pass-by-value lets us sort without touching caller data.
- Add `if (s.size() != t.size()) return false;` as quick check.
- If follow-up has Unicode, use hash map for counts instead of fixed 26 array.
