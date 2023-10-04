//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        int result=0;  
        unordered_map<char,int>mp;  //which will map our char to a given interger
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        // if our first at i index is smaller char at i+1 then 
        //IX=(5-1)=4
        //for second i hve simplily XI=10+1=11
        
        for(int i=0;i<str.length();i++){
            
            if(mp[str[i]]<mp[str[i+1]])
            {
                result-=mp[str[i]];
            }
            else
            {
                result+=mp[str[i]];  
            }
        
        }
        return result;
        //time complexity 0(N);
        //space 0(7)===0(1) constant space 
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends