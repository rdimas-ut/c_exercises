int removeElement(int* nums, int numsSize, int val) {
    int i = 0;

    while (i < numsSize) {
        if (nums[i] == val) {
            --numsSize;
            for (int j = i; j < numsSize; j++) {
                nums[j] = nums[j+1];
            }
        } else {
            ++i;
        }
    }

    return numsSize;
}
