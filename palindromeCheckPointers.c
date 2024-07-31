#include <stdio.h>
#include <string.h>

int isPalindrome(char *s, int fIndex, int lIndex) {
    while (fIndex < lIndex) {
        if (*(s+fIndex)!= *(s+lIndex)){
            return 0;
        }
        fIndex++;
        lIndex--;
    }
    return 1;
}

int main() {
    char str[100];
    int n;

    printf("Enter String: ");
    scanf("%s", str);

    n = strlen(str);

    if (isPalindrome(str, 0, n - 1)) {
        printf("It is a palindrome.\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    return 0;
}
