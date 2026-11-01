# Notes: Top K Frequent Elements

## Approach

**Submission 0 — count + sort by frequency**
- Count frequencies in `map<int,int>`. Copy to vector of pairs, sort descending by count, take first k keys.

**Submission 1 — count + max-heap**
- Count frequencies. Push `{count, num}` into `priority_queue` (max-heap by count). Pop k times, take `.second`.

## Time / Space Complexity

- Submission 0: O(n + u log u) time, O(u) space (u = unique values).
- Submission 1: O(n + u log u) time (building heap by pushes), O(u) space; pops add O(k log u).
- Better: min-heap of size k → O(n log k); bucket sort by frequency → O(n).

## Mistakes / Things to Remember

- Ordered `map` costs O(log u) per op; `unordered_map` gives O(1) average.
- Heap pair order is `{count, num}` so count is the primary key — flipping it breaks it.
- Sort lambda in sub 0 has mixed `const auto& a, auto& b` — make both `const auto&`.
- Bucket sort: index = frequency (max n), gather from highest down until k collected.
