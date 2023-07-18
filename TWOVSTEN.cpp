#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;    cin>>t;
	while(t--)
	{
	    int x;  cin>>x;
	    int d=x%10;
	    if(d==5)
	    cout<<1<<endl;
	    else if(d==0)
	    cout<<0<<endl;
	    else
	    cout<<-1<<endl;
	}
	       
	return 0;
}
