//11- Find Union and Intersection of two unsorted arrays 
#include<bits/stdc++.h>
using namespace std;
void Union(int a[],int n, int b[],int m)
{ int i;
  	 if(m*n>0)
	  {map<int,int> U;
	  for(i=0 ;i<n;i++)
	  { U.insert({a[i],0});}
	  
	  for(i=0;i<m;i++)
	  { U.insert({b[i],0});}
	  cout<< "union :- ";
	  for( auto j = U.begin(); j != U.end(); j++)
	  { cout<<j->first<<" ";}
	  }
          cout<<" "<<endl;
}

void intersection( int a[] , int n, int b[], int m)
{ int k,l;
	set<int> I;
	for(k=0;k<n;k++)
	{for(l=0;l<m;l++)
		{ if(a[k] == b[l])
			I.insert(a[k]);
		}
	}
	cout<<"Intersection :-";
	for( auto m = I.begin(); m != I.end(); m++)
          { cout<<*m<<" ";}
}

int main()
{   int a[9] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
    int b[10] = { 2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };
    Union(a,9,b,10);
    intersection(a,9,b,10);
    return 0;
}

