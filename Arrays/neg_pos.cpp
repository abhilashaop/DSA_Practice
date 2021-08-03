//Move all negative numbers to beginning and positive to end with constant extra space
 
#include<bits/stdc++.h>
using namespace std;
void neg_pos(int arr[], int n)
{ int i = 0,j=n-1;
	while(i<=j)
	{ if(arr[i]<0 && arr[j]>0)
		{i++;
		j--;}
	else if(arr[i]>0 && arr[j]<0)
		{ swap(arr[i],arr[j]);
		  i++;
		  j--;	  
		}
	else if(arr[i] > 0 && arr[j] > 0)
		{ j--;
		}
	else if(arr[i] < 0 && arr[j] <0)
		{ i++;
		}
	else 
		break;
	}
}
int main()
{ int ar[7] = {1,-2,4,-4,-5,6,-9};
	int size=7;
	int k;
	neg_pos(ar,size);
	for(k=0;k<size;k++)
	{cout<<ar[k]<<", ";}
	return 0;
}
