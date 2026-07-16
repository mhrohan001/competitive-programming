#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> divisors(n + 1);
    vector<int> divisorCount(n + 1, 0);
    vector<int> divisorSum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            divisors[j].push_back(i); // save it
            divisorCount[j]++;        // count it
            divisorSum[j] += i;       // add it
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (int d : divisors[i])
        {
            cout << d << ' '; // print divisors of i
        }
        cout << "| Count -> " << divisorCount[i] << ' ';
        cout << "| Sum -> " << divisorSum[i] << ' ';

        cout << endl;
    }

    return 0;
}