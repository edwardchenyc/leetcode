

int climbStairs(int n){
    if (n < 3) return n;
    else{
        int a=1, b=2, result=0, i;
        for (i=3; i<=n; i++){
            result = a+b;
            a = b;
            b = result;
        }
        return result;
    }
}


