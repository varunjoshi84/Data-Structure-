#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i];
    // }
    //linear search
    cout<<"enter elemenet to find"<<endl;
    int ele;
    cin>>ele;
    int pos = -1;
    // for(int i=0; i<n; i++){
    //     if(arr[i]==ele){
    //         pos = i;
    //         break;
    //     }
    // }
    // if(pos!= -1){
    //     cout<<"element found at: "<<pos;
    // }else{
    //     cout<<"element not found";
    // }
    //Binary Search
    sort(arr.begin(),arr.end());

    int start= 0, end = n - 1;
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid] == ele){
            pos = mid;
            break;
        }else if(arr[mid]<ele){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    if(pos!= -1){
        cout<<"element found at "<<pos;
    }else{
        cout<<"element not found";
    }

}