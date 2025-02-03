//binary to decimal
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

// int a = 0;
// int pow = 1;
// while(n>0){
//     int lastdig = n % 10;
//     a += lastdig*pow;
//     pow*=2;
//     n/=10;
// }
// return 0;
// }

// int a =0;
// int pow = 1;
// while(n>0){
//     int lastdig = n%10;
//     a += lastdig*pow;
//     pow*=2;
//     n/=10;

// }
// }


//decimal to binary
int a = 0;
int pow = 1;
while(n>0){
    int paritydig = n%2;
    a += paritydig*pow;
    pow*=10;
    n/=2;
}
}