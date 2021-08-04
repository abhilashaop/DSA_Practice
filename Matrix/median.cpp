//Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

#include<bits/stdc++.h>
using namespace std;
int median_row(int mat[][150],int r,int c)
{ if((r*c)%2 != 0)
	{ int min,max,i,j,median;
	min = mat[0][0];
	max = mat[r-1][c-1];
	for(i=0;i<r;i++)
	      {if(mat[i][0] <min)
	       min = mat[i][0];
		if(mat[i][c-1] > max)
		max= mat[i][c-1];
		}
	median = (r*c+1)/2;
	while (min < max)
    {
        int mid = min + (max - min) / 2;
        int loc = 0;
 
        // Finding count of elements smaller than mid
        for (int j = 0; j < r; ++j)
            loc += upper_bound(mat[j], mat[j]+c, mid) - mat[j];
        if (loc < median)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
	}
return 0;
}


int main()
{ int r= 3, c=3;
	int m[][150] ={{1,2,3},{7,8,9},{0,2,9}};
	cout<< "Median of the matrix is"<<median_row(m,r,c)<<endl;
	return 0;
}
