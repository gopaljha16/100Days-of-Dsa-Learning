// Maxium Sum bst in binary tree leetcode head level question 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//  class Box{
//     public:
//     bool BST;
//     int sum;
//     int min, max;

//     Box(){
//         BST = 1;
//         sum=0;
//         min= INT_MAX;
//         max=INT_MIN;
//     }
//  };

// class Solution {
// public:


//    Box* find(TreeNode *root , int &totalSum){
//     //root doesn't exists
//     if(!root){
//         return new Box();
//     }

//     //root exists
//     Box * leftHead = find(root->left , totalSum);
//     Box *rightHead = find(root->right , totalSum);
    
//     //bst
//     if(leftHead->BST && rightHead->BST && leftHead->max<root->val && rightHead->min>root->val){
//         Box * head = new Box();
//         head->sum = root->val+leftHead->sum+rightHead->sum;
//         head->min = min(root->val , leftHead->min);
//         head->max = max(root->val , rightHead->max);
//         totalSum = max(totalSum, head->sum);
//         return head;
//     }else{
//         //no bst
//         leftHead->BST = 0;
//         return leftHead;
//     }
//    }

//     int maxSumBST(TreeNode* root) {
//         int totalSum=0;
//         find(root , totalSum);
//         return totalSum;
//     }
// };