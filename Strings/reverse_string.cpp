// Program to reverse a string
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverseString(string& s)
{ int l = s.length();
  for(int i=0;i<l/2;i++)
  { swap(s[i],s[l-i-1]);
  }
}
int main()
{ string str = "Areyouokay";
  reverseString(str);
  cout<<str;
  return 0;
}
