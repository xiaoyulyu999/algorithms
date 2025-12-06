//
// Created by Xiaoyu Lyu on 05/12/2025.
//

#include "bfs.h"
#include <queue>
#include <unordered_set>


int bfs::start(Node* start, const Node* target)
{
    std::queue <Node*> q;
    std::unordered_set<Node*> visited;
    size_t steps = 0;
    q.push(start);
    visited.insert(start);

    while (!q.empty())
    {
        for (size_t i = 0; i < q.size(); i++)
        {
            Node* p = q.front();
            q.pop();
            if (p == target) return 1;

            if (p->left && !visited.count(p->left)) q.push(p->left), visited.insert(p->left);
            if (p->right && !visited.count(p->right)) q.push(p->right), visited.insert(p->right);

        }
    steps++;
    }
}