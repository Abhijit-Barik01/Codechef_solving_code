#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
	        int x;
	        cin>>x;
	        int c=0,n=0;
	        char a[14];
	        for(int i=0;i<14;i++)
	        {
	            cin>>a[i];
	            switch(a[i])
	            {
	                case 'C':c+=2;
	                    break;
	                 case 'N': n+=2;
	                        break;
	                case  'D': c+=1;n+=1;
	                        break;
	               
	            }
	            
	        }
	        (c>n)? cout<<60*x :((c!=n) ? cout<<40*x : cout <<55*x);
	        cout<<endl;
	   
	}
	return 0;
}
