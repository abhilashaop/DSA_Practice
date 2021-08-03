//#101
// printing the 1 st and the last occurence of the element in an array

#include<bits/stdc++.h>
using namespace std;
void occurence( int arr[100], int n, int x)

{ int i,j=0,loc,first;
  if(n>0 && x>=arr[0],x<=arr[n-1])
  { for(i=0;i<n-1;i++)
	  { if(arr[i] == x)
		  {j++;
	  	  loc = i+1;}
	  
	 }
	  first = loc-j;
	 cout<<" 1 st occurence "<<first<<endl;
	 cout<<" Last occurence "<<loc<<endl;
  }
  else 
	cout<<x<<" not in array";

}

int main()
{ int ar[10] = {1,2,3,3,3,3,3,5,6,7};
	int e = 3;
	int size = 10;
	occurence(ar,size,e);
return 0;
}
