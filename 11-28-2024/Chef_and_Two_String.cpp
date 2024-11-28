#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    char s1[101], s2[101];
	    cin>>s1;
	    cin>>s2;
	    int min=0, max=0, m=0;
	    for(int i=0; i<strlen(s1); i++){
	        if(s1[i] != '?' && s2[i] != '?' && s1[i] != s2[i]){
	            min++;
	            max++;
	        }else if((s1[i] == '?' && s2[i] != '?' )|| (s1[i] != '?' && s2[i] == '?')){
	            max++;
	        }else if(s1[i] == '?' && s2[i] == '?'){
	            max++;
	        }
	    }
	    cout<<min<<' '<<max<<endl;
	}
	return 0;
}