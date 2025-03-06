//given an int array arr,move all 0;s to the end of it while maintaining relative order of non zero elements 
//input: 0 5 0 3 42
//output: 5 3 42 0 0


// #include<bits/stdc++.h>
// using namespace std;
// void swapZerosToEnd(vector<int> &v){
//     int n = v.size();
//     for(int i=n-1;i>=0;i--){
//         int j =0;
//         bool flag = false;
//         while(j!=i){
//             if(v[j]==0 && v[j+1]!=0){
//                 swap(v[j],v[j+1]);
//                 flag  = true;
//             }
//             j++;
//         }
//         if(!flag) break;
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
//     swapZerosToEnd(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }




//given an arr of names of the fruits;you are supposed to sort it in lexicographical order using the selection sort 
//input: ['papaya','lime','watermelon','apple','mango','kiwi']
//output:['apple','kiwi','lime','mango','papaya','watermelon']
// #include <bits/stdc++.h>
// using namespace std;

// void selectionSort(char fruit[][60], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         // Finding min element
//         int min_index = i;
//         for (int j = i + 1; j < n; j++) {
//             if (strcmp(fruit[min_index], fruit[j]) > 0) {
//                 min_index = j;
//             }
//         }
//         // Place min element at the beginning
//         if (i != min_index) {
//             char temp[60];  // Declare temp array for swapping
//             strcpy(temp, fruit[i]);
//             strcpy(fruit[i], fruit[min_index]);
//             strcpy(fruit[min_index], temp);
//         }
//     }
// }

// int main() {
//     char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
//     int n = sizeof(fruit) / sizeof(fruit[0]);

//     selectionSort(fruit, n);

//     for (int i = 0; i < n; i++) {
//         cout << fruit[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
