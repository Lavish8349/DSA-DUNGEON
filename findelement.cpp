#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool found = false;
    for (int j = 0; j < n; j++)
    {
        if (x == a[j])
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
