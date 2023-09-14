#include <iostream>
using namespace std;
int main(){
    int arr[4]={5,8,6,2};
    int *ptr= &arr[0];

    cout<<"address is := " <<ptr<<" " <<"Value is :=" << *ptr<<endl;
    
}