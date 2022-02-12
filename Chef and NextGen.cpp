#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>x>>y;
	    if((a*b)<=x*y)
	       cout<<"Yes"<<endl;
	   else
	    cout<<"No"<<endl;
	}
	return 0;
}
