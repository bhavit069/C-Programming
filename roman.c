#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char charArray[100];
    int index = 0;
    int value = 0;
    int i = 0;

    printf("Enter roman: ");
    scanf("%s", word);

    for(int i = 0; i < strlen(word); i++) {
        charArray[index] = word[i];
        index++;
    }
    
    for (i = 0; i < strlen(charArray); i++) {
        switch (charArray[i]) {
            case 'I':
                value = value + 1;
                break;
            case 'V':
                value = value + 5;
                break;
            case 'X':
                value = value + 10;
                break;
            case 'L':
                value = value + 50;
                break;
            case 'C':
                value = value + 100;
                break;
            case 'D':
                value = value + 500;
                break;
            case 'M':
                value = value + 1000;
                break;
            
        }
    }
    
    printf("Value is %d", value);

    return 0;
}
