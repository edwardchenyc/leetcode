bool isPalindrome(int x){
    if (x >= 0){
        int i, y = x, digit = 0;
        while (y != 0){
            y /= 10;
            digit += 1;
        }
        for (i=digit-1; i>=0; i--){
            int first = x / (int)pow(10, i) % 10;
            int last = x % (int)pow(10, digit-i) / (int)pow(10, digit-i-1);
            if (first != last)
                return false;
        }
        return true;
    }
    return false;
}
