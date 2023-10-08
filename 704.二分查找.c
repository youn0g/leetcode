/*
 * @lc app=leetcode.cn id=704 lang=c
 *
 * [704] 二分查找
 */

// @lc code=start

int search(int *nums, int numsSize, int target)
{
    int low = 0, high = numsSize - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
// @lc code=end
