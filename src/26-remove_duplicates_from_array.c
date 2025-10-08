int removeDuplicates() {
  int *values = (int *)calloc(201, sizeof(int));
  int ans = -1;
  
  for (int i = 0; i < numsSize; i++) {
    if (values[nums[i]] != 1) {
      ans++;
      values[nums[i] + 100] = 1;
      nums[ans] = nums[i];
    }
  }
  return ans+1;
}
