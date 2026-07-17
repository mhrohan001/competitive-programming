# BigMod (Binary Modular Exponentiation)

## Purpose

Efficiently compute

```text
a^b mod M
```

without calculating the huge value of `a^b`.

Time:
- Single Query: `O(log b)`
- Space: `O(log b)` (Recursive)

---

## Core Idea

Instead of multiplying `a` by itself `b` times, repeatedly **divide the exponent by 2**.

Recursively compute:

```cpp
res = bigmod(a, b / 2, m);
```

Then square the result:

```cpp
res = (res * res) % m;
```

If `b` is odd, multiply one extra `a`:

```cpp
res = (res * a) % m;
```

---

## Important Points

- Base case:
  ```cpp
  if (b == 0)
      return 1;
  ```
- Recursively compute `a^(b/2)`.
- Square the returned result.
- If the exponent is odd, multiply one extra `a`.
- Take modulo after every multiplication to keep numbers small.
- The exponent is halved in every recursive call, giving `O(log b)` complexity.

---

## Why divide the exponent by 2?

Every exponent can be expressed using smaller exponents.

If `b` is even:

```
a^b = (a^(b/2))²
```

Example:

```
3^8 = (3^4)²
```

If `b` is odd:

```
a^b = (a^(b/2))² × a
```

Example:

```
3^9 = (3^4)² × 3
```

Instead of computing `a^b` directly, the algorithm computes `a^(b/2)` first, then builds the answer by squaring it and multiplying one extra `a` when needed.

Since the exponent is divided by `2` at every recursive call, the total number of recursive calls is only `O(log b)`.

---

## Complexity

- Single Query → `O(log b)`
- Space → `O(log b)` (Recursion Stack)

---

## Uses

- Modular exponentiation
- Modular inverse (Fermat's Little Theorem)
- Euler's Theorem
- RSA encryption
- Matrix exponentiation
- Combinatorics (`nCr mod M`)
- Number Theory problems
- Competitive Programming