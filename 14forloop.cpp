//print sum of first n natural numbers,where n is the input
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
      
        sum+=i;
    }
    cout<<sum;
}

//if we write 4 = 1+2+3+4 = 10