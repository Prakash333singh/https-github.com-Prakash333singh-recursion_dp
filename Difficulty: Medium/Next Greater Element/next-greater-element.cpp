//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        
        
        stack<long long>s;  
        vector<long long>ans(n);
        
        for(int i=n-1;i>=0;i--){
            
            //if stack is empty
            if(s.empty())
             ans[i]=-1;
            
            else if(s.size()>0 && s.top()>arr[i])
            {
                ///agar stack pe bada element mil jaye
                ans[i] = s.top();
            }
            else if(s.size() > 0 && s.top()<=arr[i])
            {
                //jab stack ka top chota ho 
                while(s.size()>0 && s.top()<=arr[i])
                {
                    s.pop();
                }
                
                if(s.size()==0)
                {
                ans[i]=-1;
                }
                else
                {
                  // 4 insert ho jayega index1 pe
                ans[i]=s.top();
                }
            }
            
            s.push(arr[i]);
        }
    
        
        
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends