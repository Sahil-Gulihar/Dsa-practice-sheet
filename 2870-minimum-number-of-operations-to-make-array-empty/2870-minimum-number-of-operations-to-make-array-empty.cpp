class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> counts;

        for (int num : nums) {
            counts[num]++;
        }

        int operations = 0;

        for (const auto& entry : counts) {
            int count = entry.second;
            if(count == 1)
                return -1;
            operations += count / 3;
            
            count %= 3;

            if (count == 2) {
                operations++;
            }
            if(count == 1){
                operations++;
            }
        }

        return operations;
    }
};