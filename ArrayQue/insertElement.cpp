#include<iostream>
using namespace std;
int main(){
   int arr[20] ,i,elem,pos,totEle;
   cout<<"Enter the size for Array :-";
   cin>>totEle;
   cout<<"Enter "<<totEle<<" Array Elements :-"<<endl;
   for(int i=0;i<totEle;i++){
    cin>>arr[i];
   }
//    cout<<"Array Elemnts Here"<<endl;

//    for(int i=0;i<totEle;i++){
//     cout<<arr[i]<<endl;
//    }
  cout<<" Enter Element insert :=";
  cin>>elem;
  cout<<"At what postion ? ";
  cin>>pos;

  for(i=totEle;i>=pos;i--)
    arr[i]=arr[i-1];
    arr[i]=elem;
      totEle++; 
   
cout<<"The New Array is : ";
for(int i=0;i<totEle;i++){
    cout<<arr[i]<<endl;
}
return 0;

}