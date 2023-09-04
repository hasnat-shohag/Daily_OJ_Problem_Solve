
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// Function to calculate the number of pairs of equal graphs
long long countEqualGraphs(int n, vector<pair<int, int>>& edges) {
    map<vector<int>, int> graphCounts;
    long long equalGraphPairs = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            vector<int> subgraph;
            for (int k = i; k <= j; ++k) {
                subgraph.push_back(edges[k].first);
                subgraph.push_back(edges[k].second);
            }
            sort(subgraph.begin(), subgraph.end());

            graphCounts[subgraph]++;
        }
    }

    for (const auto& countPair : graphCounts) {
        int count = countPair.second;
        equalGraphPairs += (static_cast<long long>(count) * (count - 1)) / 2;
    }

    return equalGraphPairs;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<pair<int, int>> edges(n);
        for (int i = 0; i < n; ++i) {
            cin >> edges[i].first >> edges[i].second;
        }

        long long result = countEqualGraphs(n, edges);
        cout << result << endl;
    }

    return 0;
}
