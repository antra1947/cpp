// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int> > pascalTriangle(int n){
//     vector<vector<int> >pascal(n);

//     for(int i=0;i<n;i++){
//        // vector<int> ith_vector = pascal[i];
//         pascal[i].resize(i+1);

//         for(int j=0;j<i+1;j++){
//             if(j==0 || j==i){
//                 pascal[i][j] = 1;
//             }else{
//                 pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];

//             }
            
//         }
//     }
//     return pascal;
// }
    


// int main(){
//     int n;
//     cin>>n;

//     vector<vector<int> > ans;
//     ans = pascalTriangle(n);

//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";

//         }cout<<endl;
//     }


// }




//given a boolean 2d arr, where each row is sorted find the row with max no of 1's

// #include<bits/stdc++.h>
// using namespace std;

// int max1Row(vector<vector<int>> &d){
//     int max1=INT_MIN;
//     int max1Row = -1; //max1 index
//     int col = d[0].size();
//     for(int i=0;i<d.size();i++){
//         for(int j=0;j<d[i].size();j++){
//             if(d[i][j]==1){
//                 int no1 = col - j;
//                 if(no1>max1){
//                     max1 = no1;
//                     max1Row = i;
//                 }
//             }
//         }
//     }
//     return max1Row;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int> > v(n,vector<int> (m)); //declare n,m
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>v[i][j];
//         }
//     }
//     int r = max1Row(v);
//     cout<<r<<endl;


// }


//output -  3 4  --- 0 0 0 0 0 0 0 1 0 0 1 1 --- 2















