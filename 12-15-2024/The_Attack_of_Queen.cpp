#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t ;
	cin >> t ;
	
	while(t--) {
	    int n , x , y ;
	    cin >> n >> x >> y ;
	    int ans = 2 * n ;
	    ans += n - abs(x -y) ;
	    ans += n - abs(n+1 - (x+y));
	    ans -= 4 ;
	    cout << ans << endl;
	}

}
