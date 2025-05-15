//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends

/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};

here, we store the vertical hight index of the node and check if the index already exists in the map 
that means we have seen a node above this node in the tree so we dont need this node in the Top view.
else if the vh of the node is not in the map means this vertical level did not
had any node so this node is the first node in this vetical level or coloumn so add it to 
map.

*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
       
      //for each horizontal distance from the root the first node
     //encountered at that horizontal distance is considered part of the top view
    //nodes are consider from leftmost to rightmost horizontal distance
    
    // horizontal distance of the root is zero
    /*the horizontal distance of the left child is hd-1*/
    /*the horizontal distance of the right child is hd+1*/
    
    /*for each unique horizontal distance the first node encountered during a level 
    order traversal bfs*/
    
    
     vector<int>result;;
     if(!root)return result;
     
       ///queue to store pairs of node its horizontal distance
     map<int,int>hdNodemap;
     
     ///map to store the first node at each horizontal distance
     queue<pair<Node*,int>>q;
     
     q.push({root,0});//start with the root node at horizontal distance 0
     
     while(!q.empty())
     {
         auto p = q.front();
         Node* node=p.first;
         //40
         int distance=p.second;
         //-1
         q.pop();
         
         //if this the first node at this horizontal distance store it
         if(hdNodemap.find(distance)==hdNodemap.end()){
             hdNodemap[distance]=node->data;
         }
         
         //Add child notes to the queue
         if(node->left){
             q.push({node->left,distance-1});
         }
         if(node->right){
             q.push({node->right,distance+1});
         }
     }
     //extract the vakes from the map to form the top view
     for(auto it:hdNodemap){
        //  cout<<it.first<<endl;
        //  cout<<it.second<<endl;
         result.push_back(it.second);
     }
     return result;

    }

};





//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(256, '\n');
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node* root = buildTree(treeString);
        vector<int> vec = ob.topView(root);
        for (int x : vec)
            cout << x << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends