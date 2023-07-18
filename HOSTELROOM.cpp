#include <iostream>
using namespace std;

int main() {
	int t;  cin>>t;
	while(t--)
	{
	    int n,x;   cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int c=x,max=x;
	    for(int i=0;i<n;i++)
	    { c+=a[i];
	        if(c>max)
	        max=c;
	        else if(c<0)
	        c=x;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
