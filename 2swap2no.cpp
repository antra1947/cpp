#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b; //take input from user 
    int temp = a;
    a=b;
    b=temp;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    return 0;
    
    



}
//output - a = 3 b = 9
//print a: 9 ,b=3