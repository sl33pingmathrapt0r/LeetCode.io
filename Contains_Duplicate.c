#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int cmp (const void *a, const void *b) {
    return ( *(int *)a - *(int  *)b);
}

bool containsDuplicate(int* nums, int numsSize){
    if (numsSize==1) return false;
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i=1; i<numsSize; i++) {
        if (nums[i]==nums[i-1]) return true;
    }
    return false;
}