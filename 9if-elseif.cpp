//age below 12 - child  , between 12 and 18 - teenager, above 18 - adult
#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<12){
        cout<<"Child";

    }else if(age>18){
        cout<<"teenager";
    }else{
        cout<<"adult";
    }
}
