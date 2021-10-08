int mystrlen(char *s) {
    int length = 0;
    while(*s) {
        length++;
        s++;
    }
    return length;
}

char *mystrncpy(char *dest, char *source, int n) {
    char *str = dest;
    int i;
    for (i = 0; i < n; i++) {
        *dest = *source;
        if (!(*source)) *dest = '\0';
        source++;
        dest++;
    }

    return str;
}

char *mystrcat(char *dest, char *source) {
    char *str = dest;
    while (*dest) {
        dest++;
    }
    while (*source) {
        *dest = *source;
        dest++;
        source++;
    }
    (*dest) = '\0';
    return str;
}

int mystrcmp(char *s1, char *s2) {
    while (*s1 || *s2) {
        if (!(*s1)) return -1;
        else if (!(*s2)) return 1;
        else if (*s1 < *s2) return -1;
        else if (*s1 > *s2) return 1;
        s1++;
        s2++;
    }
    return 0;
}

char *mystrchr(char *s, char c) {
    while(*s) {
        if (*s == c) return s;
        s++;
    }
    if (*s == c) return s;
    return '\0';
}

// int main(){
//     int mystrlen(char *s);
//     char * mystrchr(char *s, char c);
//     int mystrcmp(char *s1, char *s2);
//     char * mystrncpy(char *dest, char *source, int n);
//     char * mystrcat(char *dest, char *source);


//     char s[256] = "imagine";
//     char s2[256] = "imagines";
//     char s3[256];

//     printf("%d\n", mystrlen(s));
//     printf("%x, %c\n", mystrchr(s, 'm'), *(mystrchr(s, 'm')));
//     printf("%d\n", mystrcmp(s, s2));
//     printf("%s\n", mystrncpy(s3, s, 8));
//     printf("%s", mystrcat(s2, s));
//     return 0;
// }