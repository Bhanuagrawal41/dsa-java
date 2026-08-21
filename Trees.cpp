#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

};


static int idx = -1;

TreeNode* buildTree(vector<int> nodes){
       idx++;
       if(nodes[idx] == -1){
        return NULL;
       }



       TreeNode* currNode = new TreeNode(nodes[idx]);
       currNode->left = buildTree(nodes);
       currNode->right = buildTree(nodes);

       return currNode;
}

void preorder(TreeNode* root){
            
    if(root == NULL){
        return;
    }
    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(TreeNode* root){
    if(root == NULL){
        return;
    }



    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(TreeNode* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " ";
}

void levelorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    queue<TreeNode*> Q;
    Q.push(root);
    Q.push(NULL);

    while(!Q.empty()){
        TreeNode* curr = Q.front();
        Q.pop();
        if(curr == NULL){
          cout << endl;
          if(Q.empty()){
            break;
          }
          Q.push(NULL);

        }else{
        
        cout << curr->data << " ";
        if(curr->left != NULL){
            Q.push(curr->left);
        }

        if(curr->right != NULL ){
            Q.push(curr->right);
        }
    }

    }
    
}

//height of the binary tree----//

int max_height(TreeNode* root){
    if(root == NULL){
        return 0;
    }

   int right = max_height(root->left);
   int left = max_height(root->right);

   return max(right,  left)+ 1;
}




int main(){
      
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
           TreeNode* root = buildTree(nodes);
        //    inorder(root);
        //    postorder(root);
           levelorder(root);
           cout << max_height(root);
           


}


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