#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int min = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] < min)
                min = a[i];
        }

        int itr = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > min)
            {

                itr++;
            }
        }
        if (n == 1)
            cout << 0 << endl;
        else
            cout << itr << endl;
    }
}
