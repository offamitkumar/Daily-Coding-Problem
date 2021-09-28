class Solution {
public:
    int hIndex(vector<int>& citations) {
        int low = 0 , high = citations.size()-1; 
        const int &n = citations.size();
        while (low <= high) {
            int mid = (low + high) / 2; 
            if (citations[mid] == n-mid) {
                return n - mid; 
            } else if (citations[mid] > n - mid) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return n - low;
    }
};
