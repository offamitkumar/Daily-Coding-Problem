//
// Created by Amit Kumar on 07/07/23.
//

#include "iostream"
#include "vector"

using namespace std;

vector<int> getSortestInterval(vector<vector<int>>&intervals) {
    int start = intervals[0][1];
    int end = start;
    bool startFound = false;
    for (int i=1; i < static_cast<int>(intervals.size()); ++i){
        auto itr = intervals.at(i);
        if (!startFound) {
            if (itr.at(0) < start and itr.at(1) < start) {
                start = itr.at(1);
            } else {
                startFound = true;
            }
        } else {
            end = max(end, itr.at(0));
        }
    }
    return {start, end};
}

int main() {
    vector<vector<int>>intervals = {{0, 3},
                                    {2, 6},
                                    {3, 4},
                                    {6, 9}
    };
    vector<int> res = getSortestInterval(intervals);
    cout << res.at(0) << endl << res.at(1) << endl;
    if (res.at(0) == 3 and res.at(1) == 6) {
        cout << "passed" << endl;
    } else {
        cout << "failed" << endl;
    }
    return 0;
}