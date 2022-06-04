class Solution
{
public:
    int maxSubArray(vector<int> &nums)

    {
        int finalSum = nums[0];
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int curSum = nums[i + 1];
            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                curSum += nums[j];
                if (finalSum < curSum)
                    finalSum = curSum;
            }
        }
        return finalSum;
    }
};