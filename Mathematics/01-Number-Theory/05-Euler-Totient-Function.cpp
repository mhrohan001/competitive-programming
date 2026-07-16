#include <iostream>
using namespace std;

long long etf(long long n)
{
    long long result = n;
    // consider all primme factors of n
    // and subtract their multiples from result
    for (long long p = 2; p * p < n; p++)
    {
        // check if p is a prime factor
        if (n % p == 0)
        {
            // if yes, then update n and result
            while (n % p == 0)
            {
                n /= p;
                result -= result / p;
            }
        }
    }
    // If n > 1 after the loop, then n itself is the last prime factor.
    if (n > 1)
    {
        result -= result / n;
    }
    return result;
}
int main()
{
    long long n;
    cin >> n;
    cout << etf(n);

    return 0;
}