#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"enter the element at pos: "<<i<<endl;
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<"element at pos "<<i<<" is "<<arr[i]<<endl;
    }
}