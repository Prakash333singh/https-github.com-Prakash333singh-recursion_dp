//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        
        reverse(s.begin(),s.end());
      int i=0,l=0,r=0;
      int n=s.length();
      while(i<n){
          while(i<n && s[i]!='.'){
              s[r++]=s[i++];
          }
          if(l<r){
              reverse(s.begin()+l,s.begin()+r);
              s[r]='.';
              r++;
              l=r;
          }
          i++;
      }
      s=s.substr(0,r);
      return s;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends