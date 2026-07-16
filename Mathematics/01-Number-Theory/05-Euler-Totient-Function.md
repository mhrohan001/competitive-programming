# Euler's Totient Function

## Purpose

Compute **Euler's Totient Function** `φ(n)`, which represents the number of integers from `1...n` that are **coprime** with `n`.

Time:
- Single Query: `O(√N)`
- Space: `O(1)`

---

## Core Idea

Instead of checking the GCD of every number from `1...n`, factorize `n` and process its **distinct prime factors**.

Initially, assume every number is coprime:

```cpp
result = n;
```

For each distinct prime factor `p`, remove all numbers divisible by `p`:

```cpp
result -= result / p;
```

---

## Important Points

- Initialize `result = n`.
- Find the **distinct prime factors** of `n`.
- For each distinct prime factor `p`:
  - Remove all occurrences of `p` from `n`.
  - Update:
    ```cpp
    result -= result / p;
    ```
- If `n > 1` after the loop, then `n` itself is the last prime factor.
- **Update `result` only once per distinct prime factor**, not once per occurrence.

---

## Why update only once?

Euler's formula depends only on the **distinct prime factors**.

Example:

For

```
72 = 2³ × 3²
```

The formula is

```
φ(72) = 72 × (1 - 1/2) × (1 - 1/3)
```

Notice `(1 - 1/2)` appears only **once**, even though `2` appears three times.

Therefore, the algorithm removes all occurrences of a prime first, then updates `result` once.

---

## Complexity

- Single Query → `O(√N)`
- Space → `O(1)`

---

## Uses

- Count coprime numbers
- Euler's Theorem
- Modular arithmetic
- RSA encryption
- Number Theory problems
- Competitive Programming