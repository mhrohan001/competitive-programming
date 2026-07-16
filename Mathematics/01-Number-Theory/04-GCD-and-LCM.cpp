// GCD (Greatest Common Divisor) == HCF (Highest Common Factor)
// LCM (Least Common Multiple)
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << "The GCD  of a and b  is : " << gcd(a, b) << endl;
    cout << "The GCD  of a, b and c is : " << gcd(a, gcd(b, c)) << endl;
    cout << "The LCM  of a and b is : " << lcm(a, b) << endl;
    cout << "The LCM  of a, b and c is : " << lcm(a, lcm(b, c)) << endl;

    return 0;
}