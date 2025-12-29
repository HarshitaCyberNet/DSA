#include<iostream>
using namespace std;
int main(){
    int arr[45],n,i,pos,val;
    cout<<"enter the number of elements in the array:";
    cin>>n;
    cout<<"enter the elements  of the array:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the position where you want to insert an element:";
    cin>>pos;
    cout<<"enter the value to be inserted:";
    cin>>val;
    for(int i=n;i>pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    n++;
    cout<<"the array after insertion is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}