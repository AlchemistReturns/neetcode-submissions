# Notes: Two Sum

## Approach

**Submission 0 — sort + two pointers**
- Store `{value, original index}`, sort by value. Left/right pointers: sum < target → left++, sum > target → right--, equal → return indices.
- Return indices in ascending order (min, max).

**Submission 1 — one-pass hash map**
- For each `nums[i]`, check if `target - nums[i]` already in map. If yes, return `{its index, i}`. Else store `nums[i] → i`.

## Time / Space Complexity

- Submission 0: O(n log n) time, O(n) space.
- Submission 1: O(n) average time, O(n) space.

## Mistakes / Things to Remember

- Sorting loses positions — must carry original indices along.
- Check before insert in hash approach so an element never pairs with itself; duplicates like `[3,3]` still work.
- Neither function has a final return after the loop — fine since a solution is guaranteed, but compiler may warn (UB if never hit).
- Hash approach is the expected answer; two-pointer is useful when array is already sorted.
