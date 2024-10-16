#include <bits/stdc++.h>

using namespace std;

void bfs(int start, int end, const vector<vector<int>>& adj, vector<int>& distances) {
    queue<int> q;
    q.push(start);
    distances[start] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (distances[neighbor] == INT_MAX) { 
                distances[neighbor] = distances[node] + 1;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, Q;
        cin >> N >> Q;
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        vector<vector<int>> adj(N + 1); 
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= A[i - 1]; ++j) {
                if (i + j <= N) {
                    adj[i].push_back(i + j);
                }
            }
        }

        while (Q--) {
            int X, Y;
            cin >> X >> Y;

            vector<int> distances(N + 1, INT_MAX); 
            bfs(X, Y, adj, distances);

            if (distances[Y] == INT_MAX) {
                cout << -1 << endl;
            } else {
                cout << distances[Y] << endl;
            }
        }
    }

    return 0;
}
