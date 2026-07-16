#include <iostream>
#include <vector>
using namespace std;

int main() {
     int n;
     cin >> n;
     vector<pair<int, int>> factors;
     for(int i = 2 ; i * i <= n; i++)
     {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                cnt++;
                n/=i;
            }
            factors.push_back({i, cnt});
        }
     }

     if(n> 1)
     {
        factors.push_back({n, 1});
     }

     for(auto x : factors)
     {
        cout << x.first << '^' << x.second << endl;
     }
    return 0;
}