

int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) return 0;
    if (numsSize == 1) return 1;

    int length = 1, i;
    for (i=0; i<numsSize-1; i++){
        if (nums[i] != nums[i+1]){
            nums[length] = nums[i+1];
            length += 1;
        }
    }
    /*
    int length = numsSize, i, j;
    for (i=0; i<length-1; i++){
        for (j=i+1; j<length; j++){
            if (nums[i] != nums[j])
                break;
        }
        int offset = j-1-i;
        if (offset != 0){
            int k;
            for (k=i+1; k<(length-offset); k++){
                nums[k] = nums[k+offset];
            }
            length -= offset;
        }
    }
    */
    return length;
}


