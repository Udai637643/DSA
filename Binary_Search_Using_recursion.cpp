#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int arr[],int s,int e,int k){
    
    if(s>e)
    return false;

    int mid=s+(e-s)/2;
    if(arr[mid]==k)
    return true;
    if(arr[mid]>k){
        return binarysearch(arr,s,mid-1,k);
    }
    else{
        return binarysearch(arr,mid+1,e,k);
    }

}

int main(){
    int arr[6]={3,5,6,8,12,17};
    int s=0;
    int e=6;
    int k=15;
    bool ans=binarysearch(arr,s,e,k);
    if(ans){
        cout<<"Yes k is present in given array"<<" "<<endl;
    }else{
        cout<<"No k is not present in given array"<<" "<<endl;
    }
}