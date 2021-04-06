#include <iostream>
using namespace std;
const long long modNumber = 1000000007;
long long superPow(long long a, long long b)
{
    //TODO
    a = a % modNumber;
    if (b == 1)
        return a % (modNumber);
    int c = superPow(a, b / 2);
    int res{(c * c) % modNumber};
    if (b % 2 != 0)
    {
        res = (res * a) % modNumber;
    }
    return res;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << superPow(a, b);
    return 0;
}