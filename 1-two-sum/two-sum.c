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