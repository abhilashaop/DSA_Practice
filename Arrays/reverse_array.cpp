#include <bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int start, int end)
{ while(start<end)
	{ int t = arr[start];
	  arr[start] = arr[end];
	  arr[end] = t;
	  start++;
	  end--;
	}
}
int main()
{ int i,n,j;
  cout<<"Enter n";
  cin >>n;
  int ar[n];
  cout<<"Enter the elements of the array";
  for(i=0;i<n;i++)
  { 
	  cin>>ar[i];
  }
 
  reversearray(ar,0,n-1);
  cout<<"Reversed array is:";
  for(j=0;j<n;j++)
  {
          cout<<ar[j];
  }

return 0;
}

