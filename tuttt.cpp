#include<iostream>
using namespace std;
int main() {
  int arr[1000];
  int n;
  cin>>n;
  int i=10;
  for (int j=0;j<n;j++) {
    arr[j]=i;
    
    i=i+10;
  } for (int j=0;j<n;j++) {
    cout<<arr[j]<<" ";
    
  } return 0;
}
