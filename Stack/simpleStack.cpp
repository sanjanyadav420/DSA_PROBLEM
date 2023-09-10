#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(5);
    s.push(10);

s.push(3);
s.pop();
    //  top

    cout  << s.top() <<endl;

    //  empty()
if(s.empty()){
    cout<<"Stack is empty" << endl;
}
else{
    cout<<"Stack is not empty" << endl;
}
//  Size
cout<< "Size of stack " << s.size() <<endl;
}