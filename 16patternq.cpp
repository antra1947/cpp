//rectangular pattern 

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//hollow reactangular

// int n,m;
// cin>>n>>m;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         if(i==1 || i==n || j==1 || j==m) {
//             cout<<"*";
//         }
//     else{
//         cout<<" ";
//     }
// }
// cout<<endl;
// }
//}


//triangular 
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }


//*
//** 
//***/.
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=(n-i);j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=(2*i-1);j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }


//reverse 
// int n;
// cin>>n;
// int rev = 0;
// while(n>0){
//     int lastdigit = n%10;
//     rev = rev*10+lastdigit;
//     n/10;
// }

// cout<<rev;
// }


//factorial
// int n;
//  cin>>n;
//  int fac = 1;
//  for(int i=1;i<=n;i++){
//     fac+=i;
//     cout<<fac;
//  }
// }


//1
///2 3
// 4 5 6
// #include<bits/stdc++.h>
// using namespace std;
// int main(){

// int x = 1;
// for(int i=1;i<=5;i++){
//    for(int j=1;j<=i;j++){
//       cout<<x;
//       x = x+1;
//    }
//    cout<<endl;

// }
   

//    }


//inverting 
//1 2 3 4 
//1 2 3
// 1 2 
// 1
using namespace std;
#include <bits/stdc++.h>
#include <iostream>
int main()
{
    int n=4; // took a default value
    for (int i = n; i >= 1; --i) { // loop for iterating
        for (int j = 1; j <= i; ++j) { // loop for printing
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

