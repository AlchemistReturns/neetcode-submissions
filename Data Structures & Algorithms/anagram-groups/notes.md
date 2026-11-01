# Notes: Group Anagrams

## Approach

**Submission 0 — sorted string as key**
- Anagrams share the same sorted form. Sort a copy of each string, use it as key in `unordered_map<string, vector<string>>`, push original string into that bucket.
- Collect all buckets into the answer.

## Time / Space Complexity

- Time: O(n · m log m) — n strings, max length m (sort each).
- Space: O(n · m) for map + output.
- Alternative: 26-count array as key → O(n · m) time.

## Mistakes / Things to Remember

- Must keep original `str`, sort only the copy `temp`.
- `for (auto [x,y] : hash)` copies each vector; use `auto&` / `const auto&` to avoid copies.
- Output group order is arbitrary (unordered_map) — fine for this problem.
