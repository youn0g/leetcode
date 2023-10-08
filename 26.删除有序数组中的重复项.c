/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=startz
int removeDuplicates(int *nums, int numsSize)
{
    // // 重复元素不止一个
    // 暴力枚举，时间复杂度 log(n^2)
    // int num = 0;
    // int i = 1;
    // while (i < numsSize)
    // {
    //     if (nums[i] == nums[i - 1])
    //     {
    //         num++;
    //         int temp = nums[i];
    //         for (int j = i; j < numsSize - 1; ++j)
    //         {
    //             nums[j] = nums[j + 1];
    //         }
    //         nums[numsSize - num] = temp;
    //     }
    //     else
    //     {
    //         ++i;
    //     }
    // }
    // return numsSize - num;
    // 双指针写法 时间复杂度 log(n)
    if (numsSize == 0)
    {
        return 0;
    }
    // num记录不重复的元素
    // fast直接遍历数组元素
    int fast = 1, num = 1;
    while (fast < numsSize)
    {
        if (nums[fast] != nums[fast - 1])
        {
            nums[num] = nums[fast];
            ++num;
        }
        ++fast;
    }
    return num;
}
// @lc code=end
