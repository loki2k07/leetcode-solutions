#include <stdio.h>
#include <string.h>

int main() {
    char *strs[] = {"dog", "racecar", "car"};
    int n = 3;

    int i = 0;

    while (strs[0][i] != '\0') {
        for (int j = 1; j < n; j++) {
            if (strs[j][i] != strs[0][i]) {
                printf("%.*s\n", i, strs[0]);
                return 0;
            }
        }
        i++;
    }

    printf("%.*s\n", i, strs[0]);

    /*
    Test Case 1:
    Input: ["flower", "flow", "flight"]
    Output: fl

    Test Case 2 (edge case):
    Input: ["dog", "racecar", "car"]
    Output: ""
    */

    return 0;
}