//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    struct comp{
        bool operator()(pair<int,int> const &p1,pair<int,int>const &p2){
            if(p1.first != p2.first){
                return p1.first < p2.first;
            }
            else{
                return p2.second < p1.second;
            }
        }
    };
    
    vector<int> sortByFreq(int arr[],int n)
    {
             unordered_map<int,int> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp> pq;
        for(int i = 0; i < n; i++){
            mp[arr[i]]++;
        }
        for(auto i : mp){
            pq.push({i.second,i.first});
        }
        vector<int> ans;
        while(!pq.empty()){
            for(int i = 0;i < pq.top().first;i++){ans.push_back(pq.top().second);}
            pq.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends