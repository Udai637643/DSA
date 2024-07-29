#include<bits/stdc++.h>
using namespace std;


void display(vector<pair<int,int>>&v){
    cout<<v.size()<<" "<<endl;
    for(int i=0; i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    cout<<endl;
}
int main(){
//    vector<pair<int,int>> v={{2,4},{5,6},{6,7},{2,3}};
//    display(v);
   vector<pair<int,int>> v;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});

   }
display(v);
}