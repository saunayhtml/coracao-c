#include <iostream>
using namespace std;
int main()
{
int s, j, size=15;
	for (s= size/2; s <=size; s = s+2)
	    {
	    	for (j =1; j < size-s; j= j+2)
	    	   cout<<" ";
	    	for (j =1; j <= s; j++)
	    	    cout<<"J";
	    	for (j =1; j <size-s; j++)
	    	    cout<<" ";
	    	for (j =1; j <= s-1; j++)
	    	    cout<<"J";
			cout<<endl;
		}
		for (s = size; s >=0; s--)
		{
			for (j =s; j < size; j++)
			    cout<<" ";
			for (j = 1; j <= ((s * 2) - 1); j++)
			    cout<<"S";
			    
			 cout<<endl; 
	}
}