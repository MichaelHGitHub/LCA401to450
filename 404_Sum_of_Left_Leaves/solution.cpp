#include "header.h"
#include <stack>

void AddLeftLeaves(TreeNode* node, bool leftNode, int& sum);

int sumOfLeftLeaves(TreeNode* root) {
    int sum = 0;
    AddLeftLeaves(root, false, sum);
    return sum;
}

void AddLeftLeaves(TreeNode* node, bool leftNode, int& sum) {
    if (node == nullptr) {
        return;
    }

    if (node->left == nullptr && node->right == nullptr && leftNode) {
        sum += node->val;
    }
    AddLeftLeaves(node->left, true, sum);
    AddLeftLeaves(node->right, false, sum);
}