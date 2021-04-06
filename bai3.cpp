#include <iostream>
using namespace std;
int count = 0;
int data[100]{0};

int fibonacci(int n)
{
    // count++;
    // for (int i{0}; i < count; i++)
    //     // cout << "-";
    // cout << "Call fibonacci(" << n << ")\n";
    if (n == 0)
    {
        // for (int i{0}; i < count; i++)
        //     cout << "-";
        // count--;
        // cout << "return fibonacci(" << n << ") = " << 0 << '\n';
        return 0;
    }
    if (n == 1)
    {
        // for (int i{0}; i < count; i++)
        //     cout << "-";
        // count--;
        // cout << "return fibonacci(" << n << ") = " << 0 << '\n';
        return 1;
    }
    int res{};
    if (data[n])
        res = data[n];
    else
    {
        int f1 = fibonacci(n - 1);
        int f2 = fibonacci(n - 2);
        res = data[n] = f1 + f2;
    }
    // for (int i{0}; i < count; i++)
    //     cout << "-";
    // count--;

    // cout << "return fibonacci(" << n << ") = " << res << '\n';
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}