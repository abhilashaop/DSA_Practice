#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 6

void SpiralTraverse(int m ,int n, int a[R][C])
{int i,k=0,l=0;
	/* k -strating row index
	 * m -ending row index
	 * l -starting column index
	 * n -ending column index
	 */
	while(k<m && l<m)
	// Print 1 st row
	{ for(i=0;i<n;++i)
		{cout<<a[k][i]<<" ";
		}k++;
	}
	// Print last column 
	 for(i=0;i<m;++i)
	 {cout<<a[i][n-i];
	 }
}


