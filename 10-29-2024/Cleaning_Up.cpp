#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++)
            cin >> arr[i];
        // sorting the array below
        sort(arr, arr + m);
        // Introducing the two vectors chef and assi(for assistant)
        // these vectors will include the respective jobs to be done
        vector<int> chef, assi;
        // below are the initiators for the loop that is going to be used
        int i = 1, idx = 0, btn = 0; // here i is the loop initiator,idx is the initial index of the array
        // you'll get the use of button in further in code
        while (i <= n) // the loop goes from 1 to n
        {
            if (!btn && (arr[idx] != i)) // executed if button is off(i.e. btn=0) and i is not equal to element in array
            {
                chef.push_back(i); // i inserted in arra
                btn = 1;           // button turned on
            }
            else if (btn && (arr[idx] != i)) // executed if button is on(i.e. btn=1) and i is not equal to element in array
            {
                assi.push_back(i);
                btn = 0;
            }
            else // if arr[idx]==i then idx is increased by one that means next element in the array to be taken
                idx++;
            i++;
        }
        // Further there isn't much to explain its just printing
        if (!(chef.size()))
            cout << "-1";
        for (int i = 0; i < chef.size() + assi.size(); i++)
        {
            if (i < chef.size())
                cout << chef[i] << ' ';
            else
            {
                if (!(i - chef.size()))
                    cout << endl;
                cout << assi[i - chef.size()] << ' ';
            }
        }
        if (!(assi.size()))
            cout << "\n-1";
        cout << endl;
    }
    return 0;
}