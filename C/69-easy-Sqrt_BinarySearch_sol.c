

int mySqrt(int x) {
    if(x < 2) return x;

    int left = 2;
    int right = x/2;
    int half = 0;
    while(left <= right){
        half = left + (right-left)/2;
        if (x/half < half)
            right = half - 1;
        else if (x/half > half)
            left = half + 1;
        else
            return half;
    }
    return right;
}

