//repeatedly find min element in unsorted arr & place it at beginning--untile arr is sorted 

//eg - 5 8 4 9 2  first compare and find min element in the arr here it is 2 so we swap 2 with 5
// 2 8 4 9 5---->//2 4 8 9 5--->2 4 5 9 8--> 2 4 5 8 9
//n-1 passes -->n-1 element 

// #include<bits/stdc++.h>
// using namespace std;
// void selectionSort(vector<int> &v){
//     int n =v.size();
//     for(int i=0;i<n-1;i++){
//         //finding min element  unsorted arr
//         int min_index = i;
//         for(int j=i+1;j<n;j++){
//             if(v[j]<v[min_index]){
//                 min_index = j;
//             }
//         }
//         if(i!=min_index){
//             swap(v[i],v[min_index]);
//         }
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     selectionSort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

// }

//time and space complexity---worst time complexity - same n(n-1)/2-- o(n^2) same for best time complexity
//stable  - order of element with same value are not disturbed

//eg 3 4 3* 2 --- 2 4 3* 3---2 3* 4 3---2 3* 3 4--as we can see 3* comes before 3 so it disturbed order of element
////it is unstable sorting algorithm


