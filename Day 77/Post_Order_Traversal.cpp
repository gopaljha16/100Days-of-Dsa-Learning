// /* A binary tree node has data, pointer to left child
//    and a pointer to right child
// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// }; */
// class Solution {
//   public:
  
//    void post(Node *root , vector<int>&ans){
//        //base case
//        if(root==NULL)
//         return;
        
//         //Left Right Node
//         post(root->left , ans);
//         post(root->right , ans);
//         ans.push_back(root->data);
//    }
//     // Function to return a list containing the postorder traversal of the tree.
//     vector<int> postOrder(Node* root) {
//         // Your code here
//         vector<int>ans;
//         post(root , ans);
//         return ans;
//     }
// };