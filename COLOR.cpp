#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;   cin>>t;
	while(t--)
	{
	    int n;  cin>>n;
	    string s;   cin>>s;
	    int r1=0,g1=0,b1=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='R')
	        r1++;
	        else if(s[i]=='G')
	        g1++;
	        else 
	        b1++;
	    }
	    int max=(r1>g1)?((r1>b1)?r1:b1):((g1>b1)?g1:b1);
	    cout<<n-max<<endl;
	}
	return 0;
}
