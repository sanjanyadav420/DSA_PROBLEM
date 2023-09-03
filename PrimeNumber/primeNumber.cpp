#include <iostream>
using namespace std;
void prime(int n){
    int c=0;
    for(int i=1;i<=n;++i){
        if(n%i==0){
              c++;
         }
    }

    if(c==2){
        cout<<"Yes Number is prime"<<endl;
    }
    else{
        cout<<" number is not prime"<<endl;
    }
}
int main(){

    int n;

    cout<<"check number is prime or not"<<endl;
    cin>>n;
    prime(n);
}