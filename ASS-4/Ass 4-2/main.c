#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char* str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char* str) {
    int length = strlen(str);
    int start = 0;
    int end = 0;

    // Reverse the entire string
    reverseString(str, 0, length - 1);

    // Reverse each word in the reversed string
    while (end < length) {
        if (str[end] == ' ') {
            reverseString(str, start, end - 1);
            start = end + 1;
        }
        end++;
    }

    // Reverse the last word
    reverseString(str, start, end - 1);
}

int main() {
    char str[] = "Hello World! This is a test.";
    printf("Original string: %s\n", str);

    reverseWords(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
