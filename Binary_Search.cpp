#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(arr[m]==key){
            return m;
        }
        if(key>arr[m]){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
        
    }
    return -1;
}


int main(){
    int evenarr[6]={3,5,7,13,15,27};
    int oddarr[7]={5,6,7,12,15,17,19};
    int evenindex=binarysearch(evenarr,6,15);
    cout<<"even index is:- "<<evenindex<<endl;
       int oddindex=binarysearch(oddarr,7,17);
    cout<<"odd index is:- "<<oddindex<<endl;

}