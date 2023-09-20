#include<iostream>
using namespace std;
int main(){
    // int arr[10],tot=10,i,elem,j,found=0;
    int arr[10]={7,59,16,64,13,51,2,5,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target =64;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            continue;
        }
        else{
            cout<<arr[i]<<endl;
        }
    }

}