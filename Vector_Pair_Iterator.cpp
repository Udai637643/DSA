#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector<pair<int,int>>v_p={{2,4},{6,7},{9,8}};
//     vector<pair<int,int>> :: iterator it;
//     for(it=v_p.begin();it!=v_p.end();++it){
//         cout<<"{"<<it->first << ","<<it->second<<"}"<<"  ";
//     }
// }
int main(){
    vector<pair<int,int>>v_p={{2,4},{6,7},{9,8}};
 
    for(pair<int,int> &value:v_p){
       
        cout<<"{"<<value.first << ","<<value.second<<"}"<<"  ";
    }
}