#include<iostream>
using namespace std;

void sanjan (int & x){
    x =55;

}

int main(){
    int a=5;
    // int b=6;
    sanjan(a);

    cout<< a <<endl;

return 0;
}
//  output is 55 becoze in call by refernce in  value is change  .