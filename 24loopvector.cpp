// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){
    //vector<int> v;
    //1.forloop
    //want input from user

    // for(int i=0;i<5;i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);

    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
//v.insert(v.begin()+2,6);

    

//2. foreach
// for(int ele:v)
// {
//     cout<<ele<<" ";
// }
//v.erase(v.end()-2);

//3.while
// int i=0;
// while(i<v.size()){
//     cout<<v[i++]<<"";
// }
//     return 0;

    //}



    //q  find the last occurrence of an ele x in an given array

//    #include<bits/stdc++.h>
//    #include<vector>
//    using namespace std;
//    int main() {
//     vector<int> v(6);
//     for(int i=0;i<6;i++){
//         cin>>v[i];
//     }

//     cout<<"enter x:";
//     int x;
//     cin>>x;

//    int occurence  = -1;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==x){
//             occurence = i;
//         }
//     }
//     cout<<occurence<<endl;


   
// }



//2.count the no of occurence
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v(6);
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];


//     }
//     cout<<"enter x: ";
//     int x;
//     cin>>x;

//     int occurence = 0;
//     for(int ele:v){
//         if(ele==x){
//             occurence++;
//         }
//     }
//     cout<<occurence<<endl;
// }


//3.check if array sorted or not
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){
//     int arr [] = {1,2,3,4,5,6};
//     bool sortedflag = true;
//     for(int i=1;i<6;i++){
//         if(arr[i]<=arr[i-1]){
//             sortedflag = false;

//         }
//     }
//     cout<<sortedflag<<endl;
// }


//4.find the diff btw sum of ele at even indices to odd indices
// int arr[]={1,2,1,2,1,2};
// int ans=0;
// for(int i=0;i<6;i++){
//     if(i%2==0){
//         ans+=arr[i];


//     }
//     else{
//         ans -= arr[i];

//     }
    
// }
// cout<<<sum<<endl;



//4  target sum - find the total no of pairs in the array whose sum is equal to given value x
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){
//    int array[] = {3,5,6,7,8};
//    int targetsum = 13;  ///if we add in those no it should come as 13 like 6+7->1;8+5;
//    int size = 5;

//    int pairs = 0;
//    for(int i=0;i<size;i++){
//     for(int j=i+1;j<size;j++){
//         if(array[i]+array[j]==targetsum){
//             pairs++;
//         }


//     }
//    }
//    cout<<pairs<<endl;


// }


//5 count the no of triplet whose sum = value of x
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[] = {3,1,2,4,6,0};  ///addition of 3 ele to get targetsum value like 3+0+2;4+0+1

//     int targetsum = 5;
//     int size = 6;
//     int pairs=0;


//     for(int i=0;i<size;i++){    //i=0;j=i+1->0+1->1;k->j+1->1+1->2
//         for(int j=i+1;j<size;j++){
//             for(int k=j+1;k<size;k++){
//                 if(arr[i]+arr[j]+arr[k]==targetsum){
//                     pairs++;

//                 }
//             }

//         }
//     }
// cout<<pairs<<endl;

// }


//6 arr manipulation - find unique no in a given arr where all the ele are being repeated twice with 1 value being unique

// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[] = {1,2,1,3,2,3,4,6,6}; //unique no is 4
//     int size = 9;

//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                 arr[i]=arr[j]=-1;
//             }
//         }
//     }
//     for(int k=0;k<size;k++){
//         if(arr[k]>0){
//             cout<<arr[k];
//         }
//     }


// }

//7 find the second largest ele
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

//     int largestEleIndex(int arr[],int size){
//         int max = INT_MIN;
//         int maxindex = -1;
//         for(int i=0;i<size;i++){
//             if(arr[i]>max){
//                 max = arr[i];
//                 maxindex=i;
//             }
//         }
//         return maxindex;
//     }
//     int main(){
//         int arr[]  = {1,2,7,6,8,9};
//         int largestElement = largestEleIndex(arr,6);
// arr[largestElement]=-1;
// int largestsecondindex = largestEleIndex(arr,6);
// cout<<arr[largestsecondindex];

// }

//8 rotate the given arr by k steps when k is nonnegative
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[] = {2,4,5,7};
//     int size = 4;

//     int k = 3;
//     k=k%size;

//     int ans[4];
//     int j=0;
//     for(int i=size-k;i<size;i++){
//         ans[j++]=arr[i];
//     }
//     for(int i=0;i<=k;i++){
//         ans[j++]=arr[i];
//     }
//     for(int i=0;i<size;i++){
//         cout<<ans[i]<<"";
//     }
//     cout<<endl;
// }







