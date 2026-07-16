# Sieve of Eratosthenes

## Purpose

Precompute all prime numbers from `1...N`.

Time:
- Build: `O(N log log N)`
- Query: `O(1)`

---

## Core Idea

Initially assume every number is prime.

Whenever we find a prime `p`, mark all multiples of `p` as composite.

After processing all primes up to `√N`, the remaining numbers are prime.

---

## Important Points

- `0` and `1` are not prime.
- Remove even numbers first.
- Iterate only over odd numbers.
- Start marking from `i * i`.
- Stop when `i * i >= N`.

---

## Why start from `i * i`?

Smaller multiples have already been marked by previous primes.

Example:

For `i = 5`

- 10 → marked by 2
- 15 → marked by 3
- 20 → marked by 2

So the first new multiple is **25**.

---

## Complexity

- Build → `O(N log log N)`
- Query → `O(1)`
- Space → `O(N)`

---

## Uses

- Prime checking
- Generate primes
- SPF
- Euler Totient