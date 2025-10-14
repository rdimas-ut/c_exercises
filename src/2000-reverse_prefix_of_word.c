char* reversePrefix(char* word, char ch) {
    int i = 0;
    while (word[i] != ch & word[i] != '\0') {
        ++i;
    }
    if (word[i] == '\0') { i = -1; }
    int j = 0;
    while (word[j] != '\0') {
        ++j;
    }

    char *ans = malloc((j+1) * sizeof(char));

    int a = 0;
    printf("%d \n", i);
    printf("%d \n", j);

    for (int k = i; k > -1; --k) {
        printf("%d", a);
        ans[a] = word[k];
        ++a;
    }

    for (int k = i + 1; k < j; ++k) {
        printf("%d", a);
        ans[a] = word[k];
        ++a;
    }

    ans[j] = '\0';

    return ans;
}
