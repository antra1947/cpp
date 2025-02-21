//eg of sum in range
// #include<bits/stdc++.h>
// using namespace std;
// int sum_in_range(int x, int y){
//     int res = 0;
//     for(int i=x;i<=y;i++){
//         res += i;
//     }
//     return res;
// }

//one more fun to optimize our complexity

// int sum_in_range_optimized(int x,int y){
//     int n = (y - x + 1);

//     int a = x;
//     int res = (n*(2*a + (n-1)*1))/2;
//     return res;

// }
// int main(){

//     cout<<sum_in_range(2,6);   when we use optimized then write  cout<<sum_in_range_optimized(2,6);
// }


//output - 20 as from 2 to 6 sum is 20 2+3+4+5+6

