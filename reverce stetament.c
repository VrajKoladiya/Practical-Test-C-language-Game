#include <stdio.h>
#include<string.h>

void reversestring(char *str) {
    int length = 0;
    char *start, *end, temp;
    
    while (str[length] != '\0') {
        length++;
    }
    
    start = str;
    end = str + length - 1;
    
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello World";
    
    printf("Original string: %s\n", str);
    
    reversestring(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
