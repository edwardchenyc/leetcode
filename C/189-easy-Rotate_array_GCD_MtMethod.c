void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int _gcd(int a, int b){
    if (b == 0)
        return a;
    else
        return _gcd(b, a%b);
}

void rotate(int* nums, int numsSize, int k){
    if (numsSize != 0 && k != 0){
        k = k % numsSize;

        int gcd = _gcd(numsSize, k);
        int i, j, tmp;
        for (i=0; i<gcd; i++){
            j = ((i - k + numsSize) % numsSize);
            while (j != i){
                tmp = nums[j];
                nums[j] = nums[(j + k) % numsSize];
                nums[(j + k) % numsSize] = tmp;
                //swap(nums[j], nums[(j + k) % numsSize]);
                j = ((j - k + numsSize) % numsSize);
            }
        }
    }
}

