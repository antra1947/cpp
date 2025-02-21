// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x = 20;
//     cout<<&x;
//     return 0;
// }
//it will give any hexadecimal no diff again and again
//datatype *pointername  eg int *ptr = &x  if x = 10then its address store hexadecimal;float *ptr;
// int x  =30;
// float y = 9.7;
// int *ptr = &x;
// cout<<ptr;

// float *ptr2 = &y;
// cout<<ptr2;




//dereference operator
//like if we want to print address by dereferncing
//cout<<*ptr; ---instead of only ptr

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x,y;
//     cin>>x>>y;

//     int *ptrx = &x;
//     int *ptry = &y;

//     int res;
//     int *ptrres = &res;
//     cout<<res;

// }



//call by reference

// #include<bits/stdc++.h>
// using namespace std;
// void swap (int *x, int *y){
//     int temp = *x;
//     *x =*y;
//     *y = temp;
// }
// int main(){
//     int x = 10;
//     int y  = 20;
//      int *p1 = &x;
//      int *p2 = &y;

//     swap(p1,p2);
//     cout<<x<<" "<<y;
//     return 0;
// }

//find first and last index
// #include<bits/stdc++.h>
// using namespace std;
//  void  findindex(string s,char ch,int *first,int *last){
//   for(int i=0;i<s.size();i++){
//     if(s[i]==ch){
//         *first = i;
//         break;
//     }
//   }
//   for(int i = s.size()-1; i>=0;i--){
//     if(s[i]==ch){
//         *last = i;
//         break;
//     }
//   }
//  }


//  int main(){
//     string s = "aaccb";
//     char ch = 'a';
//     int first = -1;
//     int last = -1;

//     int *p1 = &first;
//     int *p2 = &last;
//     findindex(s,ch,p1,p2);
//     cout<<*p1<<" "<<
//  }



//pointer arithmetic --- 1.increment-shift in memory location that  the pointer is pointing to.shift is  dependent on size of the type of variable;
//2.decrement -- same as increment

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x = 20;
//     int *ptr = &x;
//cout<<"Size of x is : "<<sizeof(x)<<endl;
//     cout<<ptr<<""<<(ptr + 1)<<endl;
//     return 0;
// }


//postprearithmetic pointer
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[2] = {1,2};
//     int *ptr = &arr[0];
//     cout<<ptr<<" "<<*ptr;
//    cout<<*ptr++;
//    cout<<arr[0]<<" "<<arr[1];
//    cout<<ptr<<" "<<*ptr;
//    // cout<<(ptr+1)<<" "<<*(ptr+1)
// }



//array pointer
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int arr[9] = {13,12,45,6,7,8,9,43,2};
//     int n = 9;
//     int *ptr = &arr[0];
//     cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr;
//     cout<<*(arr + 0)<<" "<<*(arr + 1);
// for(int i =0;i<n;i++){
//     cout<<(arr+i);
// }
    
// }


//wild pointer

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int *ptr;
//     cout<<ptr;
//     return 0;
// }  //it will point any random addresss


//Null pointer
// #include<bits/stdc++.h>
// using namespace std;
// int main(){

// int *ptr = NULL;
// cout<<ptr;
// return 0;
// }  ///it will give the same output - 0x0
//if we use dereferencing it will give segmentation fault run time error not compile time as if we write

//#include<bits/stdc++.h>
// using namespace std;
// int main(){

// int *ptr = NULL;
//int *p1 = NULL;
// cout<<ptr<<" "<<p1<<*ptr;
// return 0;
// } 
//null value generally 0 will signify as 0 is special reserved memory add in many os runtime error might occur dereferencing null pointer



//dangling pointer - 

// #include<bits/stdc++.h>
// using namespace std;
// int  main(){
//     int *ptr = NULL;
//     {
//         int x = 10;
//         ptr = &x;
//     }
//     cout<<ptr;
// }

//void pointer

#include<bits/stdc++.h>
using namespace std;
int main(){
    float f = 50.7;
    int x = 3;
    void *ptr  = &f;
    ptr = &x;
    int *intPointer = (int *)ptr; //typecasting
    cout<<*intPointer;
    return 0;
}






















































































