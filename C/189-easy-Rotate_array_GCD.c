
int GCD(int a, int b){
    if (b == 0)
        return a;
    else
        return GCD(b, a%b);
}

void rotate(int* nums, int numsSize, int k){
    k = k % numsSize;
    if (k == 0) return;

    int gcd = GCD(numsSize, k);
    int tmp, i, j, tail = numsSize-1;
    for (i=0; i<gcd; i++){
        tmp = nums[tail-i];
        for (j=tail-i; j>=0; j-=k){
            if (j >= k){
                nums[j] = nums[j-k];
            }
            else if (j == (tail-i+k)%numsSize){
                nums[j] = tmp;
                break;
            }
            else if (j < k){
                nums[j] = nums[j-k+numsSize];
                j += numsSize;
            }
        }
    }
}
