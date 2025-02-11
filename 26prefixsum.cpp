//given int arr return prefix sum/ running sum same arr without creating new arr

//[3 4 5 1] =  addition of every elein each steps=[3 7 12 13]

// #include<bits/stdc++.h>
// using namespace std;
// void runningsum(vector<int> &v){
//     for(int i=1;i<v.size();i++){
//         v[i]=v[i-1]+v[i];
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);

//     }
//     runningsum(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }




//check if we can partition arr into 2 subarr with equal sum check that prefix sum of part arr equal to suffix sum of rest of arr
// #include<bits/stdtr1c++.h>
// using namespace std;

// bool partition(vector<int> &v){
//     int sum =0;
//     for(int i=0;i<v.size();i++){
//         sum+=v[i];
//     }
//     int prefixsum = 0;
//     for(int i=0;i<v.size();i++){
//         prefixsum+=v[i];
//         int suffixsum = sum -prefixsum;
//         if(suffixsum==prefixsum){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
//     cout<<partition(v)<<endl;
    
// }


//ans q queries where need print sum of values in given range indices from l to r
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     vector<int> v(n + 1, 0); // Using 1-based indexing
    
//     for (int i = 1; i <= n; i++) {
//         cin >> v[i];
//     }

//     // Compute prefix sum
//     for (int i = 1; i <= n; i++) {
//         v[i] += v[i - 1];
//     }

//     int q;
//     cin >> q;
    
//     while (q--) {
//         int l, r;
//         cin >> l >> r;
//         cout << v[r] - v[l - 1] << endl; // Corrected sum calculation
//     }

//     return 0;
// }


//output: 5 - 5  1 2 3 4 - 3 (as query) - 1 3 = 8 ;2 5 = 10 ; 4 4 = 3
//as ans v[r]-v[l-1] = v[3] - v[0] = 8-0=8 when l=1;r=3;
//when l=2,r=5 ans = v[5]-v[1] = 15-5 = 10



