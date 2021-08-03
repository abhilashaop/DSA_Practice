#include<bits/stdc++.h>
using namespace std;

// Fucntion for sorting 0 1 2
void sort012(int arr[], int n )
{  int low=0,mid=n-1,high=n-1;
	while(mid>=low)
	{ if(arr[mid] == 0)
		{swap(arr[low++],arr[mid]);
		}
	  else if (arr[mid]==1)
	  	{ mid--;
		}	  
	  else if (arr[mid]==2)
	  	{swap(arr[mid--],arr[high--]);
		}
	}
}

// main function
int main()
{ int i , j , size;
cout<<"Enter the size of the array";
cin>> size;
int ar[size];
cout<< "Enter the array elements";
for (i=0;i<size;i++)
	{ cin>> ar[i];}
sort012(ar,size);
cout<<"the sorted array is"; 
for(j = 0;j<size;j++)
	{cout<<ar[j];}
}
