//
// Created by Xiaoyu Lyu on 05/12/2025.
//

#include "bfs.h"
#include <queue>
#include <unordered_set>


int bfs::start(Node* start, Node* target)
{
    std::queue <Node*> q;
    std::unordered_set<Node*> visited;
    size_t steps = 0;

    while (!q.empty())
    {
        for (size_t i = 0; i < q.size(); i++)
        {
            Node* p = q.front();
            q.pop();
            if (p == target) return 1;

            if (p->left && !visited.contains(p->left)) q.push(p->left), visited.insert(p->left);
            if (p->right && !visited.contains(p->right)) q.push(p->right), visited.insert(p->right);

        }
    steps++;
    }
}