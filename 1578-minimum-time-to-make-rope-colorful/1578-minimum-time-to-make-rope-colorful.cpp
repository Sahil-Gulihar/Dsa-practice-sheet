class Solution {
public:
int minCost(string& colors, vector<int>& neededTime) {
    int st = 0;
    int n = colors.size();
    int sum = 0;
    int maxi = 0;
    int end;
    for (end = 0; end < n; ) {
        while (end < n && colors[end] == colors[st]) {
            sum += neededTime[end];
            maxi = max(maxi, neededTime[end]);
            end++;
    }
    sum -= maxi;
    maxi = 0;
    st = end;
    }
    return sum;
}
};