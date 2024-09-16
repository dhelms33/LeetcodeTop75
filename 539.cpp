class Solution {
public:
    // Helper function to convert "HH:MM" to minutes since midnight
    int timeToMinutes(const string& time) {
        int hours = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));
        return hours * 60 + minutes;
    }
    
    int findMinDifference(vector<string>& timePoints) {
        // Vector to store time in minutes
        vector<int> minutesList;
        
        // Convert all time points to minutes and store in minutesList
        for (const string& time : timePoints) {
            minutesList.push_back(timeToMinutes(time));
        }
        
        // Sort the times in ascending order
        sort(minutesList.begin(), minutesList.end());
        
        // Initialize minimum difference to a large value
        int minDifference = INT_MAX;
        
        // Compare adjacent times in the sorted list
        for (int i = 1; i < minutesList.size(); ++i) {
            minDifference = min(minDifference, minutesList[i] - minutesList[i - 1]);
        }
        
        // Special case: compare the first and last time (circular difference)
        int circularDifference = (24 * 60 - minutesList.back()) + minutesList[0];
        minDifference = min(minDifference, circularDifference);
        
        return minDifference;
    }
};
