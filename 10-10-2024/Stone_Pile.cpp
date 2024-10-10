#include <bits/stdc++.h>
using namespace std;

int main() {
	queue<int>answer;
	int t,val,n,a,turn;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    turn=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        answer.push(a);
	    }
	    while(answer.size()>1)
	    {
	        if(turn%2==0)
	        {
	            val=answer.front();
	            answer.pop();
	            answer.push(val);
	            answer.pop();
	        }
	        else 
	        {
	            val=answer.front();
	            answer.pop();
	            answer.push(val);
	            val=answer.front();
	            answer.pop();
	            answer.push(val);
	            answer.pop();
	        }
	        turn ++;
	    }
	    if(n%2==1)
	    cout<<0<<" "<<answer.front()<<endl;
	    else 
	    cout<<1<<" "<<answer.front()<<endl;
	    answer.pop();
	}
	return 0;
}
