//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
    private:
    bool knows(vector<vector<int> >& M,int a,int b){
        if(M[a][b]==1)
            return true;
        else
        return false;
        
    }
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) {
        
        
        // code here
        
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(knows(M,a,b)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int ans=s.top();
        int zerocnt=0;
        bool rowcheck=false;
        
        for(int i=0;i<n;i++){
            if(M[ans][i]==0){
                zerocnt++;
            }
        }
       if(zerocnt==n){
            rowcheck =true;
        }
        
        int onecnt=0;
        bool colcheck=false;
        
        for(int i=0;i<n;i++){
            if(M[i][ans]==1){
                onecnt++;
            }
        }
        if(onecnt==n-1){
            colcheck= true;
        }
         if(rowcheck==true && colcheck==true){
            return ans;
        }
        else{
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M, n) << endl;
    }
}

// } Driver Code Ends