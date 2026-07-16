# Divisor Sieve

## Purpose

Precompute divisor-related information for every number from `1...N`.

Time:
- Build: `O(N log N)`
- Query: `O(1)`

---

## Core Idea

Instead of finding the divisors of each number individually, iterate through every possible divisor.

For each divisor `i`, visit all of its multiples and update their divisor information.

---

## Important Points

- `i` represents the current divisor.
- `j` represents every multiple of `i`.
- If `i` divides `j`, update information for `j`.
- The same algorithm can:
  - Store divisors
  - Count divisors
  - Compute divisor sums
- Only the update operation changes.

---

## Why iterate over multiples?

Every divisor `i` divides exactly its multiples.

Example:

For `i = 3`

- 3
- 6
- 9
- 12
- 15
- ...

Since `3` divides all of them, we update their divisor information in one traversal.

---

## Complexity

- Build → `O(N log N)`
- Query → `O(1)`
- Space (store divisors) → `O(N log N)`
- Space (count/sum only) → `O(N)`

---

## Uses

- Find all divisors
- Count divisors
- Sum of divisors
- Multiple divisor-related queries
- Number Theory preprocessing