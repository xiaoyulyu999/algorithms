//
// Created by Xiaoyu Lyu on 06/12/2025.
//

#include "bTreeLevelOrder.h"

#include <queue>

std::vector<std::vector<int>> bTreeLevelOrder::start(Node *root) {

    std::queue<Node*> q;
    std::vector<std::vector<int>> result;

    q.push(root);

    while (!q.empty()) {
        size_t size = q.size();
        std::vector<int> level;

        for (int i = 0; i < size; i++) {

            Node* p = q.front();
            q.pop();
            level.push_back(p->value);
            if (p->left) q.push(p->left);
            if (p->right) q.push(p->right);
        }
        result.push_back(level);
    }
    return result;
}
