# Notes: Product of Array Except Self

## Approach

**Submission 0 — division by total product**
- Count zeros. >1 zero: all answers 0. Exactly 1 zero: only the zero's index gets product of the rest, others 0. No zeros: `prod / nums[i]`.
- Violates the problem's "no division" rule; passes only because of the zero special-casing.

**Submission 1 — prefix / suffix arrays**
- `prefix[i]` = product of everything left of `i`; `suffix[i]` = product of everything right of `i`.
- `ans[i] = prefix[i] * suffix[i]`. Ends `ans[0] = suffix[0]` and `ans[n-1] = prefix[n-1]` handled separately (redundant, since prefix[0] = suffix[n-1] = 1).

**Submission 3 — prefix / suffix arrays, cleaned up**
- Same idea as submission 1, single final loop over all indices. Simpler.

## Time / Space Complexity

- Submission 0: O(n) time, O(1) extra space (but uses division).
- Submissions 1, 3: O(n) time, O(n) extra space (two helper arrays).
- Follow-up O(1) extra space: store prefix products directly in `ans`, then sweep right-to-left with a running suffix variable.

## Mistakes / Things to Remember

- Division approach needs zero handling; the intended solution avoids division entirely.
- Submission 0 uses `long long prod` but pushes into `vector<int>` — implicit narrowing; fine only because answers fit in 32-bit.
- Base cases: `prefix[0] = 1` and `suffix[n-1] = 1` (empty product), so initialize both arrays with 1.
- Reduce space: reuse `ans` as prefix array, replace `suffix` array with one running variable.
