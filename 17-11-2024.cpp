#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int left = 0, right = 0;
        map<char, int> mp;
        int max_size = INT_MIN;
        while(right<n){
            mp[s[right]]++;
            while(mp[s[right]]>s[right]-'a'+1){
                mp[s[left]]--;
                left++;
            }
            max_size = max(max_size, right-left+1);
            right++;
        }
        cout<<max_size<<endl;
    }

}