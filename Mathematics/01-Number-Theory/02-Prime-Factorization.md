# Prime Factorization

## Purpose

Find all prime factors of a number along with their exponents.

Time:
- Factorization: `O(√N)`

---

## Core Idea

Try every possible divisor from `2` to `√N`.

If a divisor is found, keep dividing the number until it is no longer divisible.

The number of divisions gives the exponent of that prime factor.

---

## Important Points

- Check divisors only up to `√N`.
- Divide repeatedly while the divisor exists.
- Count the number of divisions to get the exponent.
- Store factors as `(prime, exponent)`.
- If `n > 1` after the loop, it is the last prime factor.

---

## Why divide `n` repeatedly?

Removing processed prime factors makes `n` smaller, reducing the number of future iterations.

Example:

For `n = 360`

- `360 = 2 × 180`
- `180 = 2 × 90`
- `90 = 2 × 45`

So the exponent of `2` is **3**.

---

## Complexity

- Factorization → `O(√N)`
- Space → `O(k)` (`k` = number of distinct prime factors)

---

## Uses

- Finding divisors
- Computing GCD / LCM
- Euler's Totient Function
- Divisor count / sum
- Number Theory problems