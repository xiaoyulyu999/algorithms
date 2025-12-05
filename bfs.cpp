//
// Created by Xiaoyu Lyu on 05/12/2025.
//

#include "bfs.h"
#include <queue>
#include <unordered_set>


int bfs::start(Node* start, Node* target)
{
    if (!start || !target) return -1;

    std::queue<Node*> q;                 // BFS queue
    std::unordered_set<Node*> visited;   // Faster visited check
    size_t steps = 0;

    q.push(start);
    visited.insert(start);

    while (!q.empty())
    {
        size_t size = q.size();          // Number of nodes at current BFS level

        for (size_t i = 0; i < size; i++)
        {
            Node* current = q.front();
            q.pop();

            if (current == target)
                return steps;

            // Check left child
            if (current->left && !visited.count(current->left))
            {
                visited.insert(current->left);
                q.push(current->left);
            }

            // Check right child
            if (current->right && !visited.count(current->right))
            {
                visited.insert(current->right);
                q.push(current->right);
            }
        }
        steps++;   // Completed one BFS layer
    }

    return -1; // Target not found
}

