#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minJumps(const vector<int>& nums) {
    int n = nums.size();
    if (n <= 1)
    {
        cout << "You are already at the last index" << endl;
        return 0; // No jumps needed if we are already at the last index
    }


    int jumps = 0, currentEnd = 0, farthest = 0;

    for (int i = 0; i < n - 1; ++i) {
        farthest = max(farthest, i + nums[i]);

        // If we've reached the end of the current jump range
        if (i == currentEnd) {
            jumps++;
            currentEnd = farthest;

            // If the farthest we can reach is at or beyond the last index, we're done
            if (currentEnd >= n - 1) break;
        }
    }

    return jumps;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = minJumps(nums);
    cout << "Minimum number of jumps needed: " << result << endl;

    return 0;
}
