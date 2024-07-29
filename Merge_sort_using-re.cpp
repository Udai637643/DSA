#include<bits/stdc++.h>
using namespace std;

  void merge(vector<int>& nums, int s, int e) {
        int mid = (s + e) / 2;

        int len1 = mid - s + 1;
        int len2 = e - mid;

        int* first = new int[len1];
        int* second = new int[len2];
        int k = s;
        for (int i = 0; i < len1; i++) {
            first[i] = nums[k++];
        }
        k = mid + 1;
        for (int i = 0; i < len2; i++) {
            second[i] = nums[k++];
        }

        int index1=0;
        int index2=0;
        k=s;

        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                nums[k++]=first[index1++];
            }
            else{
                nums[k++]=second[index2++];
            }
        }   
        while(index1<len1){
            nums[k++]=first[index1++];
        }
        while(index2<len2){
            nums[k++]=second[index2++];
        }
    }
    void mergesort(vector<int>& nums, int s, int e) {

        if (s >= e) {
            return;
        }
        int mid = (s + e) / 2;

        // left
         mergesort(nums, s, mid);

        // right
        mergesort(nums, mid+1, e);

        merge(nums, s, e);
    }

    int main(){
        vector<int>nums={3,4,2,5,2};
        int s=0;
        int n=nums.size();

         mergesort(nums,s,n);
         for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
         }

    }