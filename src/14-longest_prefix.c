#include <stddef.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char c = strs[0][0];
    int found = 0;
    size_t len = strlen(*strs);

    for (size_t j = 1; j < strsSize; j++){
        if (strlen(strs[j] < len)) {
            len = strlen(strs[j]);
        }
    }

    size_t end = len;

    for (size_t i = 0; i < len; i++) {
        for (size_t j = 1; j < strsSize; j++) {
            found = 1;
            end = i;
            break;
        }

        if (found) {
            break;
        }
    }

    char *ret = malloc(end + 1);
    strncpy(ret, strs[0], end);
    ret[end] = '\0';
    return ret;
}