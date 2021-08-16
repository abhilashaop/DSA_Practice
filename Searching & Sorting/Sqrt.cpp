// 104 Consider a sample space S consisting of all perfect squares starting from 1, 4, 9 and so on. You are given a number N, you have to output the number of integers less than N in the sample space S.

#include<iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int countSquares(int N) {
        int j ,i=1,count=0;
        j = sqrt(N);
        while(i<=j && i*i< N)
        {count++;
        i++;
        }
        return count;
    }
int main()
{int N,answer;
cout<<"Enter N"<<endl;
cin >>N;
answer = countSquares(N);
cout<<"Answer = "<<answer<<endl;
return 0;
}
