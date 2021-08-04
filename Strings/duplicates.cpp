//58 - Print all the duplicates in the input string 

#include<bits/stdc++.h>

using namespace std;

void duplicates(string str)
{	int i;
       	map<char,int> count;
	for(i=0;i<str.length(); i++)
	{ count[str[i]]++; }
	for(auto j : count)
	{ if(j.second >1)
		{ cout<< j.first << ", count = " << j.second<<"\n"; }
	}
}

int main()
{ string s = "sample str string";
  duplicates(s);
  return 0;
}
