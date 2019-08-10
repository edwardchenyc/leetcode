

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int *result = malloc((digitsSize+1) * sizeof(int));
    int add=1, i;
    for (i=digitsSize-1; i>=0; i--){
        if (add == 1){
            if (digits[i]+1 != 10) add = 0;
            result[i] = (digits[i]+1) % 10;
        }
        else{
            result[i] = digits[i];
            add = 0;
        }
    }
    if (add == 1){
        for (i=digitsSize; i>0; i--)
            result[i] = result[i-1];
        result[0] = 1;
        *returnSize = digitsSize + 1;
    }
    else{
        *returnSize = digitsSize;
    }

    return result;
}


