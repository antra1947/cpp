#include<bits/stdc++.h>
using namespace std;
int add(int a, int b = 8, int c = 9){
 return add(a+b+c);
}

int main(){
    cout<<add(2)<<endl;
    cout<<add(2,3)<<endl;
}