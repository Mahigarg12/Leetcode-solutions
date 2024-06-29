class Solution {
public:
    int trap(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;

    vector<int> lmb(n);
    vector<int> rmb(n);
    vector<int> waterlevel(n);
    vector<int> trapped(n);
    int sum = 0;

    // Left max boundary
    lmb[0] = height[0];
    for (int i = 1; i < n; ++i) {
        lmb[i] = max(height[i], lmb[i - 1]);
    }

    // Right max boundary
    rmb[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        rmb[i] = max(height[i], rmb[i + 1]);
    }

    // Calculate trapped water
    for (int i = 0; i < n; i++) {
        waterlevel[i] = min(lmb[i], rmb[i]);
        trapped[i] = waterlevel[i] - height[i];
        sum += trapped[i];
    }

    cout << "Total trapped water is: " << sum << endl;
    return sum;
    }
};