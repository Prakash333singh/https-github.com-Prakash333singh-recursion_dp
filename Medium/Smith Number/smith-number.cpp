//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
   bool isprime(int n){
      
      for(int i=2;i<=sqrt(n);i++){
          if(n%i==0) return false;
      }
      return true;
  }
  int findSum(int n){
      int sum=0;
      if(isprime(n)) return 0;
      int i=2;
      while(n>0 and i<=n){
          if(n%i==0 and isprime(i)){
              n/=i;
              int temp=i;
              while(temp>0){
                  sum+=(temp%10);
                  temp/=10;
              }
          }
          else i++;
      }
      return sum;
  }
    int smithNum(int n) {
        int primeSum=findSum(n);
        int digitSum=0;
        while(n>0){
            digitSum+=(n%10);
            n/=10;
        }
        //cout<<primeSum<<" "<<digitSum<<endl;
        return primeSum==digitSum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends