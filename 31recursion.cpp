//factorial

// #include<bits/stdc++.h>
// using namespace std;
// int f(int n){
//     if(n==1) return 1;
//     int ans = n * f(n -1);
//     return ans;
// }
// int main(){
//     int res = f(5);
//     cout<<res;
//     return 0;
    
// }

//time complexity = o(n) - space gets introduce call stack




//fibonacci series - sum of prev 2 terms - 0,1,1,2,3,5,8,13
// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n){
//     if(n==0 or n==1) return n;
//     return fib(n-1) + fib(n - 2);
// }
// int main(){
//     int res = fib(5);
//     cout<<res;

// }


//time complexityo(2^n)

//given int, find out sum of digits using recursion
// #include<bits/stdc++.h>
// using namespace std;
// int f(int n){
//     if(n <= 9 and n >= 0) return n;
//     return f(n/10)+(n%10);
// }
// int main(){
//     int res = f(123455);
//     cout<<res;



// }




//given 2 no p and q find value p^q using a recursive fun
// #include<bits/stdc++.h>
// using namespace std;
// int f(int n,int m){
//     if(m==0) return 1;
//     return n * f(n, m-1);


// }
// int main(){
//     int res = f(13,30);
//     cout<<res;

// }



//given arr print all the ele of the arr recursively 

// #include<bits/stdc++.h>
// using namespace std;
// //idx = index

// void f(int *arr, int idx,int n){
//     if(idx==n) return;
//     cout<<arr[idx]<<endl;
//     f(arr,idx+1,n);

// }
// int main(){
//     int n = 6;
//     int arr[] = {2,4,5,6,7,8};
//     f(arr,0,n);
//     return 0;

// } //time complexity = o(n)



//print the max value of arr[3,20,3,6,7]

// #include<bits/stdc++.h>
// using namespace std;
// int  f(int *arr,int idx,int n){
//     if(idx==n-1){
//         return arr[idx];

//     }
//     return max(arr[idx],f(arr,idx+1,n));


// }
// int main(){
//     int arr[] = {3,10,20,7,6};
//     int n = 5;
//     cout<<f(arr,0,n);
//     return 0;
// }


//find sum of values of arr[2,3,5,6,7]
// #include<bits/stdc++.h>
// using namespace std;
// int f(int *arr,int idx,int n){
//     if(idx==n-1){
//         return arr[idx];
//     }
//     return arr[idx] + f(arr,idx+1,n);
// }
// int main(){
//     int arr={6,7,8,54,3};
//     int n = 5;
//     cout<<f(arr,0,n);
//     return 0;

// }



//remove all the occurrence of a from string "abcax"

// #include<bits/stdc++.h>
// using namespace std;
// string f(string &s,int idx,int n){
//     if(idx==n) return "";
//     string cur = "";
//     cur += s[idx];
//     return((s[idx]=='a') ? "" : cur) + f(s,idx+1,n);

// }
// int main(){
//     string s = "abcax";
//     int n = 5;
//     cout<<f(s,0,n);
//     return 0;

// }


//palindrome number or not  same no front and back

// #include<bits/stdc++.h>
// using namespace std;
// bool f(int num,int *temp){
//     if(num >= 0 and num <= 9){
//         int lastdigit = (*temp)%10;
//         (*temp) /= 10;
//         return (num==lastdigit);

//     }
//     bool res = (f(num/10,temp) and (num%10) == ((*temp)%10));
//     (*temp) /= 10;
//     return res;
// } 
// int main(){
//     int num = 12431; //give 0 as false if we write 1441 then 1 which is true

//     int other = num;
//     int *temp = &other;
//     cout<<f(num,temp);
//     return 0;


// }






//given a number n find inc seq from 1 to n without using any loop
//constraints : 0<n<=1e6
//input1 : n = 4
//output: 1 2 3 4

// input2 = n = 2
// output 2 = 1 2


// #include<bits/stdc++.h>
// using namespace std;
// void f(int n){
//     if(n<1) return;
//     f(n-1);
//     cout<<n<<" ";

// }
// int main(){
//     f(4);
//     return 0;

// }



//give number num and value k print k multiples of num
//constraints = k > 0
// input1 : num = 12, k =5;
// output1 = 12,24,36,48,60


// #include<bits/stdc++.h>
// using namespace std;
// void f(int num, int k){
//     if(k==0) return;
//     f(num,k-1);
//     cout<<(num*k)<<" ";

// }
// int main(){
//     f(4,7);
//     return 0;

// }


//give number n find sum of natural number till n but with alternate signs
// if n=5 then return 1-2+3-4+5 = 3 
// constraints : 0<=n<=1__FLT_EVAL_METHOD_TS_18661_3__input1 : n = 10
// output1 -5
// input2 n = 5
// output2 : 3


// #include<bits/stdc++.h>
// using namespace std;
// int f(int n){
//     if(n==0) return 0;
//     return f(n-1)+((n%2==0)?(-n):(n));
// }
// int main(){
//     cout<<f(5)<<"\n";
//     return 0;

// }    output : 5 = 1-2+3-4+5 = sum is 3

//eulicid's eg

// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b){
//     if(b>a) return gcd(b,a);
//     if(b==0) return a;
//     return gcd(b,a%b);
// }

// int main(){
//     cout<<gcd(40,48);
//     return 0;

// }


//armstrong no or not - a number if the sum of every digit in that no raised to the power of total digit in that no is equal to the no.
//eg --- 1 5 3 ---1^3+5^3+3^3 as 3 numbers are there so we raised power 3 its sum is 153 that is same as the provided number


// #include<bits/stdc++.h>
// using namespace std;

// int armstrong(int p, int q){
//     if(q==0) return 1;
//     if(q%2==0){
//         int res = armstrong(p,q/2);
//         return res * res;
//     }else{
//         int res = armstrong(p,(q-1)/2);
//         return p * res *res;
//     }
// }
// int f(int n,int d){
//     if(n==0) return 0;
//     return armstrong(n%10,d)+f(n/10,d);
// }
// int main(){
//     int n;
//     cin>>n;
//     int digits = 0;
//     int temp = n;
//     while(temp > 0){
//         temp = temp / 10;
//         digits++;
//     }
//     int res= f(n,digits);
//     if(res == n){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
// return 0;

// }



//frog jumping
// #include<iostream>
// using namespace std;
// int f(int *h, int n, int i){
//     if(i==n-1) return 0;
//     if(i==n-2) return f(h,n,i+1) + abs(h[i] - h[i+1]);
//     return min(f(h,n,i+1) +abs(h[i] - h[i+1]), f(h,n,i+2) + abs(h[i] - h[i+2]));
// }
// int main(){
// int arr[] = {10,40,50};
// int n = 3;
// cout<<f(arr, n , 0);
// }



//given an arr of n int and target value x .print whether x exists arr or not
// constraints : 0<=n<=1e6,-1e8<=x<=1e8,-1e8<=a[i]<=1e8
//input n = 8, x = 14,arr= [4,12,54,14,3,8,6,1]
// output yes

// #include<bits/stdc++.h>
// using namespace std;
// int f(int *arr,int n,int i,int x)
// {
//     if(i==n){
//         return false;
//     }
//     return(arr[i]==x) || f(arr,n,i+1,x);
// }

// int main(){
//     int arr[] = {5,6,7,4,8,9,1};
//     int n = 7;
//     int x = 8;
//     bool res = f(arr,n,0,x);
//     if(res)cout<<"YES";
//     else cout<<"NO";
//     return 0;

// }



