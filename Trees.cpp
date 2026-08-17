#include <iostream>
#include <vector>
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




int main(){
      
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
           TreeNode* root = buildTree(nodes);
           inorder(root);
           cout << endl;


}