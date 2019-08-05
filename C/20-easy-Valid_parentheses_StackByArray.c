

bool isValid(char * s){
    char * stack[3500];
    int top = -1, i = 0;
    char cur = s[i];
    while (cur != '\0'){
        if (cur == '(' || cur == '[' || cur == '{'){
            top += 1;
            stack[top] = cur;
        }
        else if (top != -1 && ((cur == ')' && stack[top] == '(') || (cur == ']' && stack[top] =='[') || (cur == '}' && stack[top] =='{'))){
            stack[top] == '\0';
            top -= 1;
        }
        else
            return false;
        i += 1;
        cur = s[i];
    }
    if (top == -1)
        return true;
    else
        return false;
}


