#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter the index from delete the element"<<endl;
    int pos;
    cin>>pos;
    for(int i=pos; i<n; i++){
        arr[i] = arr[i + 1];

    }
    n--;
    cout<<"modified array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
}