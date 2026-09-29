class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;

        if (root == nullptr)
            return result;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* current = st.top();
            st.pop();

            // Visit root
            result.push_back(current->val);

            // Push right first
            if (current->right != nullptr)
                st.push(current->right);

            // Push left second
            if (current->left != nullptr)
                st.push(current->left);
        }

        return result;
    }
};
