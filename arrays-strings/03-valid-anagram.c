#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "a";
    char t[] = "b";

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    int isAnagram = 1;

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    printf("%s\n", isAnagram ? "true" : "false");

    /*
    Test Case 1:
    Input: "anagram", "nagaram"
    Output: true

    Test Case 2 (edge case):
    Input: "a", "b"
    Output: false
    */

    return 0;
}