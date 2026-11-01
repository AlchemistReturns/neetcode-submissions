---
description: Add problem.md and notes.md to every problem folder that has submissions but no problem statement
argument-hint: [optional topic folder or problem-id]
allowed-tools: Bash(git pull:*), Bash(ls:*), Bash(find:*), Read, Write, WebFetch, Glob, WebSearch
---

Add missing problem statements and notes templates to this NeetCode repo.

Scope: if `$ARGUMENTS` is provided, only process that topic folder or problem-id. Otherwise process the whole repo.

Folder structure:

```
<topic-folder>/<problem-id>/submission-N.<ext>
```

Steps:

1. Run `git pull` to pick up the latest auto-committed submissions.
2. Find every `<topic-folder>/<problem-id>/` directory that contains at least one `submission-*` file and has no `problem.md`.
3. For each one, get the statement from a fallback source (below).
   - NeetCode pages (`https://neetcode.io/problems/<problem-id>`) are JavaScript-rendered and return no content. Don't fetch them.
   - LeetCode (`leetcode.com`) returns HTTP 403 to WebFetch. Do not try curl, spoofed user-agents, or the GraphQL endpoint: the permission classifier blocks that as bot-check circumvention.
   - Preferred fallback: the doocs mirror, `https://leetcode.doocs.org/en/lc/<leetcode-number>/`. It has title, difficulty, statement, examples and constraints. Map the NeetCode problem-id to its LeetCode number (e.g. two-integer-sum -> 1, anagram-groups -> 49, duplicate-integer -> 217, is-anagram -> 242, top-k-elements-in-list -> 347). If the number is unknown, use WebSearch to find it.
   - Do not use `walkccc.me`: it has solutions only, no statements.
   - The fetch tool may paraphrase and drops superscripts (`10^4` shows as `104`). Restore powers of 10 in constraints.
   - Set `**Source:**` to the page actually used, and note it is the LeetCode version (e.g. `https://leetcode.doocs.org/en/lc/1/ (LeetCode 1)`), since NeetCode wording may differ slightly.
   - If every source fails, skip the problem and list it in the final report. Do not invent a statement.
4. Write `problem.md` in that problem's folder using this format:

   ```
   # <Title>

   **Difficulty:** <Easy | Medium | Hard>
   **Source:** <URL fetched>

   ## Problem

   <statement>

   ## Examples

   <examples with input and output>

   ## Constraints

   <constraints>
   ```

5. If `notes.md` does not exist in that folder, create it with this template:

   ```
   # Notes: <Title>

   ## Approach

   ## Time / Space Complexity

   ## Mistakes / Things to Remember
   ```

Rules:

- Never overwrite an existing `problem.md` or `notes.md`.
- Never modify or delete any `submission-*` file.
- Do not commit or push. Leave changes unstaged for review.

Final report (short):

- Number of problems processed
- Problems skipped, with the reason