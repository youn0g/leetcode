/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start
int searchInsert(int *nums, int numsSize, int target)
{
    // 操作对象特征：无重复的升序排列数组
    // 为达到时间复杂度要求，使用二分法
    int low = 0, high = numsSize - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (nums[mid] == target)
        {
            return mid;
        }
        // 注意区间的划分以及相应的边界变化情况
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
// @lc code=end
