# Euclid's Algorithm (GCD) & LCM

## Purpose

Find the **Greatest Common Divisor (GCD)** of two numbers efficiently.

The **Least Common Multiple (LCM)** can be computed using the GCD.

Time:
- GCD: `O(log(min(a, b)))`
- LCM: `O(log(min(a, b)))`

---

## Core Idea

Repeatedly replace `(a, b)` with `(b, a % b)`.

When `b` becomes `0`, the current value of `a` is the GCD.

The LCM is then calculated using the GCD.

---

## Important Points

- GCD is the largest number that divides both `a` and `b`.
- LCM is the smallest number divisible by both `a` and `b`.
- Replace `(a, b)` with `(b, a % b)` in every step.
- Stop when `b == 0`.
- Compute LCM as `a / gcd(a, b) * b` to avoid overflow.

---

## Why does `gcd(b, a % b)` work?

If a number divides both `a` and `b`, it also divides the remainder `a % b`.

Example:

For `a = 48`, `b = 18`

- `(48, 18)`
- `(18, 12)`
- `(12, 6)`
- `(6, 0)`

So, **GCD = 6**.

---

## Complexity

- GCD → `O(log(min(a, b)))`
- LCM → `O(log(min(a, b)))`
- Space (recursive) → `O(log(min(a, b)))`
- Space (iterative) → `O(1)`

---

## Uses

- Simplifying fractions
- Computing LCM
- Modular arithmetic
- Number Theory
- Diophantine equations