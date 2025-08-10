#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{

    // * * * *
    // * * * *
    // * * * *
    // * * * *

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void pattern2(int n)
{

    // *
    // * *
    // * * *
    // * * * *

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    // * * * *
    // * * *
    // * *
    // *
    for (int i = n; i <= 1; i--)
    {
        for (int j = n; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    //           *
    //         * * *
    //       * * * * *
    //     * * * * * * *

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        pattern7(n);
        cout << endl;
    }

    return 0;
}