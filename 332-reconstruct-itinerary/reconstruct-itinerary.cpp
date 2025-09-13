class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, priority_queue<string, vector<string>, greater<string>>> graph;
        
        // Build graph with min-heap for lexicographic order
        for (auto& ticket : tickets) {
            graph[ticket[0]].push(ticket[1]);
        }
        
        vector<string> result;
        stack<string> st;
        st.push("JFK");
        
        // Hierholzer's algorithm for Eulerian path
        while (!st.empty()) {
            string curr = st.top();
            if (graph[curr].empty()) {
                result.push_back(curr);
                st.pop();
            } else {
                string next = graph[curr].top();
                graph[curr].pop();
                st.push(next);
            }
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};