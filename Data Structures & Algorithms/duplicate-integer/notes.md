# Notes: Contains Duplicate

## Approach

**Submission 0 — `set` + size compare**
- Insert all numbers into `set<int>`. If set size != array size, a duplicate existed.

**Submission 1 — `unordered_set` early exit**
- Iterate; if number already in `seen`, return true. Else insert. Return false at end.

## Time / Space Complexity

- Submission 0: O(n log n) time (ordered set), O(n) space.
- Submission 1: O(n) average time (hash set), O(n) space. Can exit early on first duplicate.
- Alternative: sort and check neighbours → O(n log n) time, O(1) extra space.

## Mistakes / Things to Remember

- Prefer `unordered_set` over `set` when order is not needed.
- Sub 0 always processes whole array; sub 1 short-circuits.
- `auto x` in sub 0 copies ints — harmless, but `int`/`const auto&` is cleaner.
