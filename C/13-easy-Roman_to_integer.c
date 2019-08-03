

int romanToInt(char * s){
    int i=0, result=0;
    while(s[i] != '\0'){
        switch(s[i]){
            case 'M':
                result += 1000;
                break;
            case 'D':
                result += 500;
                break;
            case 'C':
                if (s[i+1] == 'D'){
                    result += 400;
                    i += 1;
                }
                else if (s[i+1] == 'M'){
                    result += 900;
                    i += 1;
                }
                else
                    result += 100;
                break;
            case 'L':
                result += 50;
                break;
            case 'X':
                if (s[i+1] == 'L'){
                    result += 40;
                    i += 1;
                }
                else if (s[i+1] == 'C'){
                    result += 90;
                    i += 1;
                }
                else
                    result += 10;
                break;
            case 'V':
                result += 5;
                break;
            case 'I':
                if (s[i+1] == 'V'){
                    result += 4;
                    i += 1;
                }
                else if (s[i+1] == 'X'){
                    result += 9;
                    i += 1;
                }
                else
                    result += 1;
                break;
            default:
                break;
        }
        i += 1;
    }
    return result;
}


