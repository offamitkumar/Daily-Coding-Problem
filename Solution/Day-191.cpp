bool compare(vector<int>&a, vector<int>&b) {
    return a.at(1) < b.at(1);
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), compare);
        int counter{}; 
        const int &n = intervals.size();
        int current_end = 0;
        for (int i=0; i<n; ++i) {
            if (current_end == 0 || current_end <= intervals.at(i).at(0)) {
                current_end = intervals.at(i).at(1);
            } else {
                ++counter; 
                current_end = min(current_end , intervals.at(i).at(1)); 
            }
        }
        return counter;
    }
};
