#include<iostream>
using namespace std;
int main() {
  int arr[5];
  int n;
  n=sizeof(arr)/sizeof(int);
  cout<<n<<endl;
  int i=10;
  for (int j=0;j<n;j++) {
    arr[j]=i;
    
    i=i+10;
  } for (int j=0;j<n;j++) {
    cout<<arr[j]<<" ";
    
  } return 0;
}
