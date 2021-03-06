// Write a program to remove trailing blanks and tabs from each line
// of input, and to delete entirely blank lines
#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

// Print longest input line
int main() {
    int len;
    int max;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > 80 ) {
            printf("%s", line);
        }
    }
    return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[], int lim) {
    int c, i;

    for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
