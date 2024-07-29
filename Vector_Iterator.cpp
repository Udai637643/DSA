#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector<int>v={2,4,6,7,9};
//     vector<int> :: iterator it=v.begin();
//     for(it=v.begin();it!=v.end();++it){
//         cout<< (*it) << " ";
//     }

// }

//for auto keywords
int main(){
    vector<int>v={2,4,6,7,9};
    //vector<int> :: iterator it=v.begin();
    for(auto it=v.begin();it!=v.end();++it){
        cout<< (*it) << " ";
    }

}

//  int main(){
//     vector<int>v={2,4,6,7,9};
 
//  //actual value of the vector and this is claaed a range based loop 
//  for(int &value :v){
//     value++;
//  }

//  //copy of the vector
//     for(int value : v){
//         cout<< value << " ";
//     }
// }