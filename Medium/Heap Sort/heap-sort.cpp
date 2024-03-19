//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

// This algorithm works by first organizing the data into a max heap, and then swapping the top element (the max) with
// the last element, decreasing the heap size by one, and finally heapifying the root again. Repeat these steps until
// the heap size is one, and voila, your array is sorted!

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
       //Your Code Here
      int largest=i;
      int left=2*i+1;
      int right=2*i+2;
      
      if(left <n &&arr[left] >arr[largest]){
          largest=left;
      }
      if(right < n &&arr[right] >arr[largest]){
          largest=right;
      }
      
      if(largest !=i){
          swap(arr[i],arr[largest]);
          heapify(arr,n,largest);
      }
      
      
    }

    public:
    //Function to build a Heap from array.
    //0(n)
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
    for(int i=n/2-1;i>=0;i--)
         {
            heapify(arr,n,i); //0(logn)   
         }
    
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        buildHeap(arr,n);
        
        for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
        }
        //0(nlogn)
        
        //space complexity 0(1)
    }
};




//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends