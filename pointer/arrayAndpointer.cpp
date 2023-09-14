#include <iostream>
using namespace std;
int main(){
    int arr[4]={5,8,6,2};
    int *ptr= &arr[0];

    cout<<"address is := " <<ptr<<" " <<"Value is :=" << *ptr<<endl;
    cout <<"address is := " <<arr<<" " <<"Value is :=" << *arr<<endl;

    return 0;
}
// address is := 0x61fefc Value is :=5
// address is := 0x61fefc Value is :=5