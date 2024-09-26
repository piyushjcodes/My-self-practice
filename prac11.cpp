#include<iostream>
#include<cstring>
using namespace std;
int main() {
  int arr[5];
  memset (arr,0,sizeof(arr));
  int n;
  n=sizeof(arr)/sizeof(int);
  cout<<n<<endl;
  
   for (int j=0;j<n;j++) {
    cout<<arr[j]<<" ";
    
  } return 0;
}
