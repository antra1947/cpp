#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> d;
    cout<<"Size: "<<d.size()<<endl;
    cout<<"Capacity: "<<d.capacity()<<endl;

    
    d.push_back(1);
    cout<<"Size: "<<d.size()<<endl;
    cout<<"Capacity: "<<d.capacity()<<endl;

    d.push_back(2);
    cout<<"Size: "<<d.size()<<endl;
    cout<<"Capacity: "<<d.capacity()<<endl;

    d.push_back(3);
    cout<<"Size: "<<d.size()<<endl; //it will give the output in the formof pow 2 like for 1-1,2-2,3-4

    cout<<"Capacity: "<<d.capacity()<<endl;

    d.pop_back();//if one time then total capacity dec by 1 if one more




    return 0;

}