/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (target == nums[i] + nums[j])
            {
                int *re = (int *)malloc(sizeof(int) * 2);
                re[0] = i;
                re[1] = j;
                *returnSize = 2;
                return re;
            }
        }
    }
    *returnSize = 0;
    return 0;
}
// @lc code=end
