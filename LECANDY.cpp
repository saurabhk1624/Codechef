#include <iostream>
using namespace std;

int main() {
    int t;  cin>>t;
    while(t--)
    {
        int n,c;  cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int s=0;
        for(int i=0;i<n;i++)
        s+=a[i];
        if(c>=s)
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;
    }
	return 0;
}
 