

bool isPalindrome(int x){
    if (x >= 0){
        int i, y = x, digit = 0;
        while (y != 0){
            y /= 10;
            digit += 1;
        }
        while(digit > 1){
            int digit10 = (int)pow(10, digit-1);
            int first = x / digit10;
            int last = x % 10;
            if (first != last)
                return false;
            x = x % digit10 / 10;
            digit -= 2;
        }
        return true;
    }
    return false;
}


