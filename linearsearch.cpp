#include<iostream>
using namespace std;
int main() {
  int arr[]={10,20,30,10,20};
  int n = sizeof(arr)/sizeof(int);
  int t;
  cin>>t;
 int i=10;
 int j;
  
  for ( j=0;j<n;j++) {
    if (arr[j]==t) {
        cout<<t<<" found at index ="<<j;
        break;
         } 
         }  
  if (j==n) {
    cout<<t<<" Not found";
  }
  
    
   return 0;
}

