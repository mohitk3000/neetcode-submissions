class CountSquares {
public:
    CountSquares() {
        
    }
    
    void add(vector<int> point) {
        mp[point]++;
    }
    
    int count(vector<int> point) {
        int ans = 0;
        for (const auto& [pt, freq] : mp) {
            // to check the diagonal
            int dx = (point[0] - pt[0]);
            int dy = (point[1] - pt[1]);

            if (abs(dx) > 0 && abs(dy) > 0 && abs(dx) == abs(dy)) {
                int a = freq;
                vector<int> p1 = {pt[0] + dx, pt[1]};
                vector<int> p2 = {pt[0], pt[1] + dy};
                if (mp.contains(p1) && mp.contains(p2)) {
                    int b = mp[p1];
                    int c = mp[p2];
                    ans += a * b * c;
                }
            }
        }
        return ans;
    }

    map<vector<int>, int> mp;
};
