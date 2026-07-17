# Modular Inverse

## Purpose

Compute the **modular inverse** of an integer `a` under modulo `m`. A modular inverse allows us to perform **division in modular arithmetic**, where normal division is not defined. It is commonly used in modular arithmetic, combinatorics, and number theory problems.

**Time:**
- Single Query: `O(log m)` (using Fermat's Little Theorem)
- Space: `O(log m)` (recursive Binary Modular Exponentiation)

---

## Core Idea

The modular inverse of `a` is an integer `x` such that

```text
(a × x) % m = 1
```

A modular inverse **exists if and only if**

```text
gcd(a, m) = 1
```

When `m` is **prime**, Fermat's Little Theorem states

```text
a^(m - 1) ≡ 1 (mod m)
```

Multiplying both sides by `a⁻¹` gives

```text
a^(m - 2) ≡ a⁻¹ (mod m)
```

Therefore, the modular inverse can be computed as

```cpp
inverse(a) = bigMod(a, m - 2, m);
```

Binary Modular Exponentiation computes this power efficiently in `O(log m)` time.

---

## Important Points

- A modular inverse exists only if `gcd(a, m) = 1`.
- Fermat's Little Theorem requires `m` to be **prime**.
- Reduce the base before exponentiation.
  ```cpp
  a %= m;
  ```
- Always take modulo after every multiplication.
  ```cpp
  res = (res * res) % m;
  ```
- Multiply by `a` only when the exponent is odd.
  ```cpp
  if (b & 1)
      res = (res * a) % m;
  ```
- Base case:
  ```cpp
  return 1 % m;
  ```
- For non-prime moduli, compute the inverse using the **Extended Euclidean Algorithm**.

---

## Why does it work?

Suppose we want to find the modular inverse of

```text
3 mod 7
```

We need a number `x` such that

```text
3 × x ≡ 1 (mod 7)
```

Since `7` is prime,

```text
inverse(3) = 3^(7 - 2) = 3^5 mod 7
```

Using Binary Modular Exponentiation,

```text
3^5 mod 7 = 5
```

Verification:

```text
3 × 5 = 15

15 % 7 = 1
```

So, `5` is the modular inverse of `3`.

Binary Modular Exponentiation is efficient because each recursive (or iterative) step halves the exponent.

For an even exponent:

```text
a^8 = (a^4)^2
```

For an odd exponent:

```text
a^9 = (a^4)^2 × a
```

Since the exponent is divided by `2` at every step, only `O(log m)` multiplications are required.

---

## Complexity

- Single Query → `O(log m)`
- Space → `O(log m)` (recursive implementation)

---

## Uses

- Modular Division
- Modular Arithmetic
- Combinatorics (`nCr % m`)
- Number Theory
- Binary Exponentiation
- Competitive Programming
- Cryptography