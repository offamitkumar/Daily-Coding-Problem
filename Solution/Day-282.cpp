class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
        unordered_set<int>s; 
        for (int i=0; i<n; ++i) {
            arr[i]*=arr[i];
            s.insert(arr[i]);
        }
        for (int i=0; i<n; ++i) {
            for (int j=i+1; j<n; ++j) {
                if (s.find(arr[i]+arr[j]) != s.end()) {
                    return true;
                }
            }
        }
        return false; 
	}
};
