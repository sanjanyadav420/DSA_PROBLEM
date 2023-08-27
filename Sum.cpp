#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;

}
int add(int n ,int n1, int n2){
    int sum= n+n1+n2;
    return sum;

}

int main(){
    int a =5;
    int b=8;
   cout<<add(a,b)<<endl;
   cout<<add(a,b,5)<<endl;
   
}