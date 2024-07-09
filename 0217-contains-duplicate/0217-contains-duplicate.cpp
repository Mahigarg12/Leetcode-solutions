class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> freqMap;
    for (int num : nums) {
        freqMap[num]++;
        if (freqMap[num] > 1) {
            //cout << "true";
            return true;
        }
    }
    //cout << "false";
    return false;
    }
};