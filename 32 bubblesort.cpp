//sorting - ordering of elements inc or dec order
//bubblesort - repeatedly swap 2 adjacent elements if in wrong order.
//traverse full arr at the end then start from first
//eg - I PASS--20,50,40,10,30- 20,40,50,10,30-20,40,10,50,30--IIPASS--20,40,10,30,50--20,10,40,30,50--IIIPASS--20,10,30,40,50-10,20,30,40,50<--IV PASS last also
//n-1 passes like 5 elements then n-1 --> 5-1-->4passes

/////optimization only use when it is nearly sorted array so we add more than // lines 
// #include<bits/stdc++.h>
// using namespace std;
// void bubbleSort(vector<int> &v){
//     int n = v.size();
//     for(int i=0;i<n-1;i++){
///////bool flag = false;
//         for(int j=0;j<n-i-1;j++){
//             if(v[j]>v[j+1]){
///////flag = true;
//                 swap(v[j],v[j+1]);
//             }
//         }
//////if(!flag) break;
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
//     bubbleSort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;



// }


//maximum no of swap in worst case 
//n(n-1)/2

//time and space complexity --- max swap - n(n-1)/2---> 
//so, O(n*(n-1)/2) ignore const O^n2)
//space complexity -- no extra space --> O(1)


//stable and unstable sort -- 
//stable -- does not disturb the order of elements with same value 
//eg. -- 40 30 10 20 30*
//stable - 10 20 30 30* 40
//unstable-- 10 20 30* 30 40

///bubble sort is a stable    algo as element greater than that only then it will swap 

