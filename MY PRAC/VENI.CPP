// class Solution {
// public:
//     bool uniformArray(vector<int>& nums1) {
//         int minOdd = INT_MAX;

//         for (int x : nums1) {
//             if (x % 2 != 0) {
//                 minOdd = min(minOdd, x);
//             }
//         }

//         // If all numbers are already even or all already odd
//         if (minOdd == INT_MAX) return true;

//         for (int x : nums1) {
//             // Every even number needs a smaller odd number
//             if (x % 2 == 0 && x <= minOdd) {
//                 return false;
//             }
//         }

//         return true;
    

//     }
// };


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        if (root == nullptr)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        bool flag = true;

        while (!q.empty()) {

            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {

                TreeNode* node = q.front();
                q.pop();

                level.push_back(node->val);

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            if (!flag) {
                reverse(level.begin(), level.end());
            }

            ans.push_back(level);

            flag = !flag;
        }

        return ans;
    }
};