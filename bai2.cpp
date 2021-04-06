#include <iostream>
#include <string>
using namespace std;

bool palindrome(const string &str)
{
    // TODO
    bool res = true;
    for (size_t i = 0; i < str.length() / 2; i++)
    {
        res *= (str[i] == str[str.length() - 1 - i]);
    }
    return res;
}
bool rectPalindromeRecursion(const string &str, int i)
{
    if (i == str.length() / 2)
        return (str[i] == str[str.length() - 1 - i]);
    return (str[i] == str[str.length() - 1 - i]) * rectPalindromeRecursion(str, i + 1);
}
bool palindromeRecursion(const string &str)
{
    // TODO
    return rectPalindromeRecursion(str, 0);
}

int main()
{
    //TODO
    string str{};
    do
    {
        cin >> str;
        if (str == "*")
            return 0;
        cout << boolalpha << palindrome(str) << ' ' << palindromeRecursion(str) << '\n';
    } while (str != "*");
    return 0;
}
