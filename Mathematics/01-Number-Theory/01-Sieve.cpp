#include <iostream>
#include <vector>
using namespace std;
const int N = 1e7 + 10;
vector<bool> isPrime(N, true);
void sieve()
{
    isPrime[0] = isPrime[1] = false;
    // mark even numbers greater than 2 as false
    for (int i = 4; i < N; i += 2)
    {
        isPrime[i] = false;
    }
    // process only odd numbers
    for (int i = 3; i * i < N; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
int main()
{
    sieve();
    int n = 1000;
    for (int i = 0; i <= n; i++)
    {
        if (isPrime[i])
            cout << i << endl;
    }

    return 0;
}