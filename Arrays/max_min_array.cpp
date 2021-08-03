#include<iostream.h>
using namespace std;

int MinMax(int arr[],int n)
{ if(arr[0]>arr[n-1])
	{min = arr[n-1];
	max = arr[0];
	}
	else
	{min = arr[0];
	max = arr[n-1];}
for(int i=0;i<n;i++)
{ if(arr[i] < min)
	{min = arr[i];}
  if(arr[i] > max)
	 { max = arr[i];
	 }
}
return min;
return max;
}

int main()
{ int n,i,Max,Min;
	cout<<"Enter n";
	cin>>n;
int ar[n];
cout<<"Enter the elements of the array:";
for(i = 0;i<n;i++)
{cin>>ar[i];
}
Min,Max = MinMax(ar[],n);
cout <<"Minimum :"<<Min;
cout<<"Maximum :"<<Max;
}
