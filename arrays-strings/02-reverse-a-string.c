#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("%s\n", str);

    /*
    Test Case 1:
    Input: "hello"
    Output: "olleh"

    Test Case 2 (edge case):
    Input: "a"
    Output: "a"
    */

    return 0;
}