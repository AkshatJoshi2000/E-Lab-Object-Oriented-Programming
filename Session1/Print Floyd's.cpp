#include <iostream>
using namespace std;

int main()
{
    int n, i, c, a = 1;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (c = 1; c <= i; c++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
    return 0;
}