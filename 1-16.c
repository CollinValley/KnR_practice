// Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines,
// and as much as possible of the text.
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
        printf("Length:%d\n", len);
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
