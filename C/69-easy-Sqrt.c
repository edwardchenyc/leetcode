#define min(a, b) a < b ? a : b

int mySqrt(int x){
    int y = min(x/2+1, 46340), last = 0, i;
    for (i=1; i<=y; i++){
        if (x >= last && x < i*i){
            return i-1;
        }
        else
            last = i*i;
    }
    return i-1;
}


