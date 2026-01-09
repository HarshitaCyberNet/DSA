#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4
    };
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsofar=arr[0];
    int currentsum=arr[0];
    for (int i=0; i <n; i++){
        currentsum=max(arr[i],currentsum + arr[i]);
        maxsofar = max(maxsofar, currentsum);
    }
    cout<<"maximum subarray sum:"<<maxsofar<<endl;
    return 0;
}