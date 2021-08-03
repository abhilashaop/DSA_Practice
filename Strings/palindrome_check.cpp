// 57 
#include<bits/stdc++.h>
using namespace std;
void palindrome( char s[])
{ int n,i,j;
	n = strlen(s);
	if (n==0)
	cout<<"Empty string";
   i = 0;
   j= n-1;
   while(i<=n-1)
  { if (s[i++] != s[j--])
	  { cout<<"Not a palindrome";
	    return;
	  }
  }
cout<<"It is a palindrome";
}

int main()
{       char str[100];
	cout<<"Enter the string"<<endl;
	cin >> str;
	palindrome(str);
	return 0;
}
