#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int i, j;
    char temp;

    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    // Test Case 1
    char str1[] = "hello";
    reverseString(str1);
    printf("Test Case 1: %s\n", str1);

    // Test Case 2
    char str2[] = "abcd";
    reverseString(str2);
    printf("Test Case 2: %s\n", str2);

    return 0;
}