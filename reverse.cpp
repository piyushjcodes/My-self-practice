#include<iostream>
using namespace std;
int main() {
    int arr[1000];
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>arr[i];

    }  cout<<endl;
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    } cout<<endl;

    int i=0;
    int j=n-1;
    while (i<j) {
        swap(arr[i],arr[j]);
        i++;
        j--;
    } for (int k=0;k<n;k++) {
        cout<<arr[k]<<" ";
    }
    
    return 0;
}