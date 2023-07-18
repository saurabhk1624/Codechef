#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;   cin>>t;
	while(t--)
	{
	    int n;  cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int c=0;
	    for(int i=0;i<n-1;i++)
	    { int m=abs(a[i]-a[i+1]);
	        if(m<=1)
	        c++;
	    }
	    if(c==n-1)
	    cout<<"YES"<<endl;
	    else 
	    cout<<"NO"<<endl;
	}
	return 0;
}
