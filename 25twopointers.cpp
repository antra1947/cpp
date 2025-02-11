//sort 0 and 1

// #include<bits/stdc++.h>
// using namespace std;
// void sort(vector<int> v){
//     int count = 0;
//     for(int ele:v){
//         if(ele==0){
//             count++;
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<count){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }
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
//     sort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
//  //pass by reference - copy of that 
// void sort(vector<int> &v){
//     int left_ptr = 0;
//     int right_ptr = v.size()-1;
//     while(left_ptr<right_ptr){
//         if(v[left_ptr]==1 && v[right_ptr]==0){
//             v[left_ptr++]=0;
//             v[right_ptr--]=1;
//         }
//         if(v[left_ptr]==0){
//             left_ptr++;

//         }
//         if(v[right_ptr]==1){
//             right_ptr--;
//         }
//     }
//     return;
// }
// int  main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
//     sort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<"";
//     }
//     cout<<endl;
//     return 0;

// }


//3.array move all even int at beginning followed by all odd int.The relative order of odd or even int does not matter return any array that satisfies condition
// #include<bits/stdc++.h>
// using namespace std;

// void sort(vector<int> &v){
//     int left_ptr = 0;
//     int right_ptr = v.size()-1;
//     while(left_ptr<right_ptr){
//         if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
//             swap(v[left_ptr],v[right_ptr]);
//             left_ptr++;
//             right_ptr--;
//         }
//         if(v[left_ptr]%2==0){
//             left_ptr++;
//         }
//         if(v[right_ptr]%2==1){
//             right_ptr--;
//         }
//     }
//     return;
// }
//  int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);


//     }
//     sort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }

//  }

//1 3 4 6
//6 4 1 3


//given arr sorted in no dec , return arr of square of each no sorted in non dec order
// #include<bits/stdc++.h>
// using namespace std;
// void sortsq(vector<int> &v){
//     vector<int> ans;
//     int left_ptr = 0;
//     int right_ptr = v.size()-1;
//     while(left_ptr<=right_ptr){
//         if(abs(v[left_ptr])<abs(v[right_ptr])){
//             ans.push_back(v[right_ptr]*v[right_ptr]);
//             right_ptr--;
//         }else{
//             ans.push_back(v[left_ptr]*v[left_ptr]);
//             left_ptr++;

//         }
//     }
//reverse(ans.begin(),ans.end());
//     for(int i=0;i<v.size();i++){
//         cout<<ans[i]<<" ";
//     }
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
//     sortsq(v);
//     return 0;

//}

