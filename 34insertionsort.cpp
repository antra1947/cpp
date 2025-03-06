//repeatedly take elements from unsorted subarr & insert in sorted subarr
//eg- 11 8 15 9 4  so we take 11 as sorted arr rest all unsorted
//then from 8 place in sorted part -- 8 11 15 9 4
//8 9 11 15 4 ---- 4 8 9 11 15



#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &v){
    int n = v.size();
    for(int i=1;i<n;i++){
        int currele = v[i];
        //find correct position for our curr ele
        int j = i - 1;
        while(j>=0&& v[j]>currele){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = currele;
    }
    return;
}
int main(){
    int n;
    cin>>n;
     vector<int> v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
        
     }
     insertionSort(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
}


//time complexity worst case - o(n^2) space complexity -- o(1) best cse omega(n)

//stable sorting algorithm

