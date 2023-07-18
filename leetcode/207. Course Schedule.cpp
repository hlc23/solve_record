#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses);
        vector<vector<int>> graph(numCourses);
        for (auto prerequisite : prerequisites) {
            graph[prerequisite[1]].push_back(prerequisite[0]);
            indegree[prerequisite[0]]++;
        }

        queue<int> q;
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        int ans = 0;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            ans++;

            for (auto& n : graph[node]) {
                indegree[n]--;
                if (indegree[n] == 0) {
                    q.push(n);
                }
            }
        }

        return ans == numCourses;
    }
};