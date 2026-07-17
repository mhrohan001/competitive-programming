#include <iostream>
using namespace std;

long long bigmod(long long a, long long b, long long m)
{
    // Base case b^0 = 1
    if (b == 0)
        return 1 % m;

    // Compute a^(b/2)
    long long res = bigmod(a, b / 2, m);

    // square it
    res = (res * res) % m;

    // If b is odd, multiply one extra 'a'
    if (b % 2 == 1)
        res = (res * a) % m;
    return res;
}
int main()
{
    long long a, b, m;
    cin >> a >> b >> m;
    cout << bigmod(a, b, m);

    return 0;
}