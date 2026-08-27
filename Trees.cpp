


#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Node{
    public:
    int root;
    Node* right;
    Node* left;

    Node(int root){
        root = this->root;
        right = NULL;
        left = NULL;
    }

};
static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx] == -1){
        return;
    }

    Node* currnode = new Node(nodes[idx]);
    currnode->left = buildTree(nodes);
    currnode->right = buildTree(nodes);



    return currnode;



}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);
}




































// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// class TreeNode{
//     public:
//     int data;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int data){
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }

// };


// static int idx = -1;

// TreeNode* buildTree(vector<int> nodes){
//        idx++;
//        if(nodes[idx] == -1){
//         return NULL;
//        }



//        TreeNode* currNode = new TreeNode(nodes[idx]);
//        currNode->left = buildTree(nodes);
//        currNode->right = buildTree(nodes);

//        return currNode;
// }

// void preorder(TreeNode* root){
            
//     if(root == NULL){
//         return;
//     }
//     cout << root-> data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(TreeNode* root){
//     if(root == NULL){
//         return;
//     }



//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }
// void postorder(TreeNode* root){
//     if(root == NULL){
//         return;
//     }

//     postorder(root->left);
//     postorder(root->right);
//     cout<< root->data << " ";
// }

// void levelorder(TreeNode* root){
//     if(root == NULL){
//         return;
//     }
//     queue<TreeNode*> Q;
//     Q.push(root);
//     Q.push(NULL);

//     while(!Q.empty()){
//         TreeNode* curr = Q.front();
//         Q.pop();
//         if(curr == NULL){
//           cout << endl;
//           if(Q.empty()){
//             break;
//           }
//           Q.push(NULL);

//         }else{
        
//         cout << curr->data << " ";
//         if(curr->left != NULL){
//             Q.push(curr->left);
//         }

//         if(curr->right != NULL ){
//             Q.push(curr->right);
//         }
//     }

//     }
    
// }

// //height of the binary tree----//

// int count(TreeNode* root){
//     if(root == NULL){
//         return 0;
//     }

//    int right = count(root->left);
//    int left = count(root->right);

//    return (right +  left)+ 1;
// }
// int Sum_of_Nodes(TreeNode* root){
//     if(root == nullptr){
//         return 0;
//     }

//     int right = Sum_of_Nodes(root -> left);
//     int left = Sum_of_Nodes(root -> right);

//     return (right + left + root->data);
// }




// int main(){
      
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
//            TreeNode* root = buildTree(nodes);
//         //    inorder(root);
//         //    postorder(root);
//            levelorder(root);
//            cout << count(root);
           


// }


// class Solution {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;

//         if (root == NULL)
//             return ans;

//         queue<TreeNode*> q;
//         q.push(root);

//         bool flag = true;

//         while (!q.empty()) {
//             int n = q.size();

//             vector<int> v(n);

//             for (int i = 0; i < n; i++) {
//                 TreeNode* temp = q.front();
//                 q.pop();

//                 int idx;

//                 if (flag) {
//                     idx = i;
//                 } else {
//                     idx = n - 1 - i;
//                 }

//                 v[idx] = temp->val;

//                 if (temp->left)
//                     q.push(temp->left);

//                 if (temp->right)
//                     q.push(temp->right);
//             }

//             ans.push_back(v);

//             flag = !flag;
//         }

//         return ans;
//     }
// };

// this easy leet code is scary man

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
// // class Solution {
// public:
//     bool isBalanced(TreeNode* root) {
  
//         return dfsHeight(root) != -1;
//     }

//     int dfsHeight(TreeNode* root){
//         if(root == NULL){
//             return 0;
//         }

//         int left = dfsHeight(root->left);
//          if(left == -1) return -1;

//         int right = dfsHeight(root->right);
//         if(right == -1) return -1;

//         if(abs(left - right) > 1){
//             return -1;
//         }

//         return max(left, right) + 1;
//     }


// };


//diameter fo the binary treee

// class Solution {
// public:
//    int max_height(TreeNode* root){
//      if(root == NULL){
//             return 0;

//         }

//         int left = max_height(root->left);
//         int right = max_height(root->right);

//         return max(right, left)+1;
//    }
     
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root == NULL){
//             return 0;
//         }
//       int left = max_height(root->left);
//       int right = max_height(root->right);

//       int curr = (left + right);

//       int leftDiameter = diameterOfBinaryTree(root->left);
//       int rightDiameter = diameterOfBinaryTree(root -> right);

//       return max(curr, max(leftDiameter, rightDiameter));
//     }
// };

// // optimised solution for the diameter of the binary tree 


// class Solution { 
// public:
//    int max_height(TreeNode* root, int &diameter){
//      if(root == NULL){
//             return 0;

//         }

//         int left = max_height(root->left, diameter);
//         int right = max_height(root->right, diameter);
//         diameter = max(diameter, left + right);

//         return max(right, left)+1;
//    }
     
//     int diameterOfBinaryTree(TreeNode* root) {
//         int diameter = 0;
//         max_height(root, diameter);
//         return diameter;
      
//     }
// };

// leet code hard baby easy peasy only too 1:30 hr to solve this simple hard problem :)
// class Solution {
// public:
//      int max_Path(TreeNode* root, int &maxi){
//         if(root == NULL){
//             return 0;
//         }
//         int left = max_Path(root-> left, maxi);
//         int right = max_Path(root -> right, maxi);
//          int nicche_hi_Milgya_ans = (left + right) + root->val;
//          int koi_ek_accha = max(left, right) + root->val;
//          int only_root_is_accha = root->val;

//         maxi = max({maxi, nicche_hi_Milgya_ans, koi_ek_accha, only_root_is_accha});

//         return max(koi_ek_accha, only_root_is_accha);
//      }
//     int maxPathSum(TreeNode* root) {
//       int maxi = INT_MIN;
//       max_Path(root, maxi);
//        return maxi;
//     }
// };

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
// class Solution {
// public: 
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(p == NULL || q == NULL){
//             return (p == q);
//         }
//         return(p->val == q->val)&& isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//     }
// };
