/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start
int removeElement(int *nums, int numsSize, int val)
{
    // slow 指向存放符合既定要求的元素
    int slow = 0, fast = 0;
    while (fast < numsSize)
    {
        if (nums[fast] != val)
        {
            nums[slow++] = nums[fast++];
        }
        else
        {
            ++fast;
        }
    }
    return slow;
}
// @lc code=end
