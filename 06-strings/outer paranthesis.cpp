//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
           int cnt = 0;

        string st;

        for(int i = 1; i < s.size(); i++)

        {

            if(s[i] == '(' && cnt >= 0)

            {

                st += s[i];

                cnt++;

            }

            else if(s[i] == ')' && cnt > 0)

            {

                st += s[i];

                cnt--;

            }

            else if(s[i] == ')' && cnt == 0)

            {

                if( i < s.size() )

                    i++;

            }

        }

        return st;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends
