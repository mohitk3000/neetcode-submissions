class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        for (int i = 0; i < points.size(); i++) {
            pq.push({distance(points[i]), i});
        }
        
        vector<vector<int>> res;
        for(int i = 0; i < k; i++) {
            int idx = pq.top().second;
            vector<int> point = points[idx] ;
            res.push_back(point);
            pq.pop();
        }

        return res;
            
    }

    float distance(vector<int> p) {
        return sqrt((p[0]*p[0]) + (p[1]*p[1]));
    }

    priority_queue<pair<float,int>, vector<pair<float, int>>, greater<pair<float, int>>> pq; // min heap to put distance and index
};
