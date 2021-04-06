#include <iostream>

using namespace std;

int findMaxRecr(int *p, int n)
{
    // TODO
    if (n <= 1)
        return p[0];
    int maxN = findMaxRecr(p + 1, n - 1);
    if (p[0] > maxN)
        return p[0];
    else
        return maxN;
}

int main()
{
    int n;
    cin >> n;

    int *p = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
    }

    cout << findMaxRecr(p, n) << endl;

    return 0;
}