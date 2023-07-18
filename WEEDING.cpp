#include <iostream>
using namespace std;

int main() {
	int t;  cin>>t;
	while(t--)
	{
	    int n,m,k;  cin>>n>>m>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if((a[i]+k-1)>m)
	        {
	            c++;
	            break;
	        }
	    }
	    if(c>0)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
