typedef struct node{
    char value;
    struct node *next;
} Node;

bool isValid(char * s){
    Node *top = NULL;
    int i = 0;
    char cur = s[i];
    while (cur != '\0'){
        if (cur == '(' || cur == '[' || cur == '{'){
            Node *new;
            new = (Node *)malloc(sizeof(Node));
            new->value = cur;
            new->next = top;
            top = new;
        }
        else if (top != NULL && ((cur == ')' && top->value == '(') || (cur == ']' && top->value =='[') || (cur == '}' && top->value =='{'))){
            Node *tmp;
            tmp = top;
            top = top->next;
            free(tmp);
        }
        else
            return false;
        i += 1;
        cur = s[i];
    }
    if (top == NULL)
        return true;
    else
        return false;
}
