

char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize == 0)
        return "";
    else if (strsSize == 1)
        return strs[0];

    int i = 0, j, diff = 0;
    char *result;
    while(strs[0][i] != '\0'){
        for (j=1; j<strsSize; j++){
            if (strs[0][i] != strs[j][i]){
                diff = 1;
                break;
            }
        }
        if (diff == 1)
            break;
        i += 1;
    }
    
    result = malloc((i+1)*sizeof(char));
    snprintf(result, (i+1)*sizeof(char), strs[0]);
    return result;
}


