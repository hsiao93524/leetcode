<h2><a href="https://leetcode.com/problems/two-sum">Two Sum</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given an array of integers <code>nums</code>&nbsp;and an integer <code>target</code>, return <em>indices of the two numbers such that they add up to <code>target</code></em>.</p>

<p>You may assume that each input would have <strong><em>exactly</em> one solution</strong>, and you may not use the <em>same</em> element twice.</p>

<p>You can return the answer in any order.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,7,11,15], target = 9
<strong>Output:</strong> [0,1]
<strong>Explanation:</strong> Because nums[0] + nums[1] == 9, we return [0, 1].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,2,4], target = 6
<strong>Output:</strong> [1,2]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,3], target = 6
<strong>Output:</strong> [0,1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= target &lt;= 10<sup>9</sup></code></li>
	<li><strong>Only one valid answer exists.</strong></li>
</ul>

<p>&nbsp;</p>
<strong>Follow-up:&nbsp;</strong>Can you come up with an algorithm that is less than <code>O(n<sup>2</sup>)</code><font face="monospace">&nbsp;</font>time complexity?


# Code
## 147ms
```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *res = malloc(sizeof(int) * 2);
    int sum = 0;
    int compare = 0;

    // printf("%lu, %lu", sizeof(*nums), sizeof(nums[0]));
    // int numsSize = (int)(sizeof(*nums) / sizeof(nums[0]));
    for(int i = 0; i < numsSize - 1; i ++){
        for(int j = (i+1);j < numsSize; j++){
            res[0] = i;
            res[1] = j;
            compare = target - nums[i];
            if(nums[j] == compare){
                *returnSize = 2;
                return res;
            }
        }
    }
    // // printf("%d, %d, %d, %d", numsSize, sizeof(*nums), sizeof(nums[0]), sizeof(nums) / sizeof(nums[0]));
    return NULL;
}
```
## 100ms
```
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *res = malloc(sizeof(int) * 2);
    int sum = 0;
    int compare = 0;

    // printf("%lu, %lu", sizeof(*nums), sizeof(nums[0]));
    // int numsSize = (int)(sizeof(*nums) / sizeof(nums[0]));
    for(int i = 0; i < numsSize - 1; i ++){
        for(int j = (i+1);j < numsSize; j++){
            compare = target - nums[i];
            if(nums[j] == compare){
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return res;
            }
        }
    }
    // // printf("%d, %d, %d, %d", numsSize, sizeof(*nums), sizeof(nums[0]), sizeof(nums) / sizeof(nums[0]));
    return NULL;
}
```
## 56ms
```
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *res = malloc(sizeof(int) * 2);
    int sum = 0;
    int compare = 0;

    // printf("%lu, %lu", sizeof(*nums), sizeof(nums[0]));
    // int numsSize = (int)(sizeof(*nums) / sizeof(nums[0]));
    for(int i = 0; i < numsSize - 1; i ++){
        compare = target - nums[i];
        for(int j = (i+1);j < numsSize; j++){
            if(nums[j] == compare){
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return res;
            }
        }
    }
    // // printf("%d, %d, %d, %d", numsSize, sizeof(*nums), sizeof(nums[0]), sizeof(nums) / sizeof(nums[0]));
    return NULL;
}
```
