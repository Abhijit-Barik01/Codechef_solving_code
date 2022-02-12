#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;


	int n;

	int j;
	cin>>t;

	while(t--)
	{
	    cin >>n ;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	   	int c=0;
	    int x=0;
	    	
	    for( j=0;j<n;j++)
	    {
	        x=c+j+1;
	        if(arr[j]==x)
	            c++;
	            
	    }
	    cout<<c<<endl;
	   
	}
	return 0;
}
