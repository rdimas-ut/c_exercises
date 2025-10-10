/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** removeAnagrams(char** words, int wordsSize, int* returnSize) {
    *returnSize = wordsSize;
    char **returnWords = (char **)malloc(wordsSize * sizeof(char *));
    for (int i = 0; i < wordsSize; i++) {
        returnWords[i] = words[i];
    }

    int i = 1;
    while (i < *returnSize) {
        int j = 0;
        char word_one = '\0';
        char word_two = '\0';
        int word_one_int = 0;
        int word_two_int = 0;

        while (returnWords[i][j] != '\0') {
            printf("char_one: %d \n", returnWords[i][j]);
            word_one ^= returnWords[i][j];
            word_one_int += returnWords[i][j];
            ++j;
        }

        j = 0;
        while (returnWords[i-1][j]!= '\0') {
            printf("char_two: %d \n", returnWords[i-1][j]);
            word_two ^= returnWords[i-1][j];
            word_two_int += returnWords[i-1][j];
            ++j;
        }

        printf("%d: ", word_one);
        printf("%d: ", word_two);


        if ((word_one == word_two) & (word_one_int == word_two_int)) {
            for (j = i; j < *returnSize - 1; j++) {
                returnWords[j] = returnWords[j + 1];
            }
            *returnSize = *returnSize - 1;
            i = 1;
        } else {
            ++i;
        }
    }

    return returnWords;
}
