#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        ˜ cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] - y <= 0)
            {
                a[i] = 0;
            }
            else
            {
                a[i] -= y;
            }
        }
        int sum1 = 0;
        for (int i = 0; i < n; i++)
        {
            sum1 += a[i];
        }

        if (sum <= (sum1 + x))
            cout << "NO COUPON" << endl;
        else
            cout << "COUPON" << endl;
    }
}
