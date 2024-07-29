//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
public:
    // Function to check if two strings are isomorphic.
    int areIsomorphic(string str1, string str2)
    {
        unordered_map<char, vector<int>> mp1;
        unordered_map<char, vector<int>> mp2;

        int s1 = str1.size();
        int s2 = str2.size();

        // Populate mp1 and mp2 with indices of occurrences
        for (int i = 0; i < s1; i++)
            mp1[str1[i]].push_back(i);

        for (int j = 0; j < s2; j++)
            mp2[str2[j]].push_back(j);

        // Print mp1
        cout << "mp1 contents:\n";
        for (const auto &pair : mp1)
        {
            cout << pair.first << ": ";
            for (const auto &index : pair.second)
            {
                cout << index << " ";
            }
            cout << endl;
        }

        // Print mp2
        cout << "mp2 contents:\n";
        for (const auto &pair : mp2)
        {
            cout << pair.first << ": ";
            for (const auto &index : pair.second)
            {
                cout << index << " ";
            }
            cout << endl;
        }

        // Compare the index vectors
        for (int i = 0; i < s1; i++)
        {
            if (mp1[str1[i]] != mp2[str2[i]])
            {
                return false;
            }
        }

        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin >> t;
    string s1, s2;
    while (t--)
    {
        cin >> s1;
        cin >> s2;
        Solution obj;
        cout << obj.areIsomorphic(s1, s2) << endl;
    }

    return 0;
}
// } Driver Code Ends
