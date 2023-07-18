#include <iostream>
using namespace std;

int main() {
	int t;  cin>>t;
	while(t--)
	{
	    int n,k,v;     cin>>n>>k>>v;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int max=(n+k)*v;
	    int s=0;
	    for(int i=0;i<n;i++)
	    s+=a[i];
	    int ans=max-s;
	    if(ans>0)
	    {
	       
	    if(ans%k==0)
	    cout<<ans/k<<endl;
	    else 
	    cout<<"-1"<<endl;
	    }
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
