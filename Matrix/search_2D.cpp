// 45 love babbar
#include<bits/stdc++.h>
using namespace std;
int search(int mat[4][4], int n, int x)
{ if (n==0)
	return -1;
  if( x < mat[0][0] || x > mat[n-1][n-1])
	  return -1;
  int i =0, j = n-1;
  while(i<n && j >=0)
  {	  
  if(mat[i][j] == x )
  { cout<<"Element found at ["<<i<<","<<j<<"]";
          cout<< "True";
  	  return 1;
  }
  else if (x > mat[i][j])
	  i++;
  else if(x<mat[i][j])
	  j--;
  }
  cout << "Element not Found in the matrix";
  return 0;
}

int main()
{	/* int s,k,l,e;
	cout<< "enter no. of rows / columns for the square matrix";
	cin >> s;
	int m[s][s];
	cout << "Enter the matrix row wise";
	for (k = 0;k<s;k++)
	{ for (l=0;l<s;l++)
		{ cin>> m[k][l];
		}

	cout<< "Enter the element to be searched";
	cin >> e;
	}
	search( m,s,e);
	*/
	 int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
	 search(mat, 4, 29);
	return 0;
}
