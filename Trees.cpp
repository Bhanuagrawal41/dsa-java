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

    while(!Q.empty()){
        TreeNode* curr = Q.front();
        Q.pop();
        cout << curr->data << " ";
        if(curr->left != NULL){
            Q.push(curr->left);
        }

        if(curr->right != NULL ){
            Q.push(curr->right);
        }

    }
    cout << endl;
}




int main(){
      
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
           TreeNode* root = buildTree(nodes);
        //    inorder(root);
        //    postorder(root);
           levelorder(root);
           cout << endl;


}