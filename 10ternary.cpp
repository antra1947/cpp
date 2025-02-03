#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>33){
        cout<<"Pass";

    }else{
        cout<<"fail";
    }
    //we can use ternary operator for this to code the satement in just 1 line
    
    //marks>33 ? cout<<"Pass"<<endl : cout<<"fail"<<endl;
}