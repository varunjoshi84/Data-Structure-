//insertion at any position

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter element"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pos;
    cout<<"enter index where to enter new element "<<endl;
    cin>>pos;
    int ele;
    cout<<"Enter element "<<endl;
    cin>>ele;
    for(int i=n; i>pos; i--){
        arr[i] =arr[i - 1];
    }
    arr[pos]=ele;
    n++;
    cout<<"array with new element with desired position"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}