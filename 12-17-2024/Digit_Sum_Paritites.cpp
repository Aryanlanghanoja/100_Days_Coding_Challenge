#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int digitSum(int x)
{
    int ans = 0;
    while (x > 0)
    {
        ans += (x % 10);
        x /= 10;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (digitSum(n) % 2 == digitSum(n + 1) % 2)
        {
            cout << (n + 2) << endl;
        }
        else
        {
            cout << (n + 1) << endl;
        }
    }
}