#include <bits/stdc++.h>
using namespace std;

int main()
{
      int tests;
      cin >> tests;
      while (tests--)
      {
            int n, m;
            cin >> n >> m;

            int ans = ((n + 1) / 2) * ((m + 1) / 2);
            cout << ans << endl;
      }
      return 0;
}