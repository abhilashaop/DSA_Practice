//The program finds ot the k th smallest element in the array:
#include<algorithm>
#include<iostream>
int ksmallest(int arr[],int n,int k)
{ sort(arr,arr+n);
  return arr[k-1];
}
int main()
{ int n , k ;
int arr[] = { 12, 3, 5, 7, 19 };
int n = sizeof(arr) / sizeof(arr[0]), k = 2;
cout<<"The smallest"<<k<<"th element is: "<<ksmallest(ar[],n.k)
return 0;

}

