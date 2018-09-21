#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        if (nums.size() < 2)
            return nums.size();
        int lastNum = nums[0], len = nums.size(), pos = 1;

        for (int i = 1; i < len; i++) {
            if (lastNum != nums[i]) {
                lastNum = nums[i];
                nums[pos] = lastNum;
                pos++;
            }
        }
        return pos;
    }

    void show(vector<int> &nums) {
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << ",";
        }
        cout << endl;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums = {1,1,2};
    Solution s;
    cout << s.removeDuplicates(nums) << endl;
    s.show(nums);
    return 0;
}