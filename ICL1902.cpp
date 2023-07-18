#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;  cin>>t;
	while(t--)
	{
	    int n;  cin>>n;
	    int c=0;
	    while(n!=0)
	    {
	      int  k=sqrt(n);
	      c++;
	      n-=k*k;
	        
	    }
	    cout<<c<<endl;
	}
	
	return 0;
}
