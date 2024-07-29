#include<bits/stdc++.h>
using namespace std;


void display(vector<int>&v){
    cout<<v.size()<<" "<<endl;
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.push_back(5);
    cout<<endl;
}
int main(){
    vector<int>v;

    v.push_back(4);
    v.push_back(9);
    vector<int> &v2= v;
    v2.push_back(2);
    display(v);
    display(v);
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);a
    // }
    display(v2);
}