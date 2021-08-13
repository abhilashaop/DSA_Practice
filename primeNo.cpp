// Given the number N. Find no. of primes which are less than N and doesn't have a digit 0 in them.
// using seive method : seive is an array in which every position for prime no is marked as 1 and for nono-prime is 0
#include<bits/stdc++.h>
using namespace std;

void seive(int arr[], int n)
{ int i,j;
	arr[1]= 0;
	// as 2 is prime
	arr[2] = 1;
	for(i=3;i<=n;i++)
	{ if(arr[i] ==1)
		for(j = i*i;j<=n;j+=2*i)
		{ arr[j] = 0;
		}
	}
return;
}

int nonzero(int n)
{ while(n>0)
	{int r;
       r= n%10;
       if(r==0)
	return 0;	       
       n = n/10;
	}
return 1;	
}

int main()
{int i,n,count=0;
cin>> n;
// Assign every element of the seive array arr as 0 initially
int ar[n+1] ={0};
// put all odd no.s as 1 inially as every even no. is non-prime
for(i=3;i<=n;i+2)
{ ar[i] = 1;
}
seive(ar,n);
for(i=0;i<=n;i++)
{if (ar[i] ==1)
count += nonzero(n);
}
cout<<count;
return 0;
}
