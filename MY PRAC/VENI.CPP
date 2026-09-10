// // class Solution {
// // public:
// //     bool uniformArray(vector<int>& nums1) {
// //         int minOdd = INT_MAX;

// //         for (int x : nums1) {
// //             if (x % 2 != 0) {
// //                 minOdd = min(minOdd, x);
// //             }
// //         }

// //         // If all numbers are already even or all already odd
// //         if (minOdd == INT_MAX) return true;

// //         for (int x : nums1) {
// //             // Every even number needs a smaller odd number
// //             if (x % 2 == 0 && x <= minOdd) {
// //                 return false;
// //             }
// //         }

// //         return true;
    

// //     }
// // };


// class Solution {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

//         vector<vector<int>> ans;

//         if (root == nullptr)
//             return ans;

//         queue<TreeNode*> q;
//         q.push(root);

//         bool flag = true;

//         while (!q.empty()) {

//             int size = q.size();
//             vector<int> level;

//             for (int i = 0; i < size; i++) {

//                 TreeNode* node = q.front();
//                 q.pop();

//                 level.push_back(node->val);

//                 if (node->left)
//                     q.push(node->left);

//                 if (node->right)
//                     q.push(node->right);
//             }

//             if (!flag) {
//                 reverse(level.begin(), level.end());
//             }

//             ans.push_back(level);

//             flag = !flag;
//         }

//         return ans;
//     }
// };


class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.size()-1; i >= 0; i--){
            if(num[i] % 2 != 0){
                return num.substr(0, i+1);
            }
        }
        return "";
        
    }
};

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



class Solution {
public:
    int ans = 0;

    pair<int, int> dfs(TreeNode* root) {
        if (root == NULL) {
            return {0, 0};
        }

        pair<int, int> left = dfs(root->left);
        pair<int, int> right = dfs(root->right);

        int sum = left.first + right.first + root->val;
        int count = left.second + right.second + 1;

        if (sum / count == root->val) {
            ans++;
        }

        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};