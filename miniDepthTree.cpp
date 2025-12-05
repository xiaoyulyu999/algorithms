//
// Created by Xiaoyu Lyu on 05/12/2025.
//

#include "miniDepthTree.h"

#include <queue>
#include <unordered_set>

int miniDepthTree::findMiniDepth(Node* root)
{
    std::queue<Node*> q;
    std::unordered_set<Node*> visited;

    q.push(root);
    visited.insert(root);

    size_t depth = 0;
    while (!q.empty())
    {
        size_t size = q.size();
        for (size_t i = 0; i < size; i++)
        {
            Node* node = q.front();
            q.pop();
            if (!node ->left and !node -> right) return depth + 1;
            if (node -> left and !visited.contains(node -> left)) q.push(node -> left), visited.insert(node -> left);
            if (node -> right and !visited.contains(node -> right)) q.push(node -> right), visited.insert(node -> right);
        }
        depth++;
    }
    return depth + 1;
}
