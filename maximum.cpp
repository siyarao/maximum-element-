#include<iostream>
using namespace std;

int main()
{    
	int n,i,m , max ;
	int *a = new int[n];
	
	cout<<"Enter the size of array: ";
	cin>>n;
	
	cout<<"Enter "<<n<<" elements: ";
	for(i=0; i<n; i++)
	{ 
	   cin>>a[i];
	}
		
	cout<<"Elements are: ";
	for(i=0; i<n; i++)
	{ 
	   cout<<a[i]<<" ";
    }
    
    max = a[0];
    for(i=1; i<n; i++)
    {
    	if(max<a[i])
    		max=a[i];
	}
	cout<<"\nMaximum element is: "<<max;
	
    return 0;
}
