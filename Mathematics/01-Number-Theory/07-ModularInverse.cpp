#include <iostream>
using namespace std;

long long bigmod(long long a, long long b, long long m)
{
    a %= m;
    if (b == 0)
        return 1 % m;
    long long res = bigmod(a, b / 2, m);
    res = (res * res) % m;
    if (b & 1) // if(b % 2 == 1) or if(b % 2) is also correct
        res = (res * a) % m;
    return res;
}

long long modInverse(long long a, long long m)
{
    if (a == 0)
        return -1;              // Inverse doesn't exist
    return bigmod(a, m - 2, m); // m must be prime and gcd(a, m) = 1 (Fermat's Little Theorem)
}
int main()
{
    long long a, m;
    cin >> a >> m;
    cout << modInverse(a, m);

    return 0;
}