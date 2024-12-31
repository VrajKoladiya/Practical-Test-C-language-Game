#include <stdio.h>

int main() {
    char ch;
    

    printf("Enter a character: ");
    scanf("%c", &ch);
    
 


   
    switch(ch) {
        case 'a':printf("%c is a vowel.\n", ch);
            break;
        case 'e':printf("%c is a vowel.\n", ch);
            break;
        case 'i':printf("%c is a vowel.\n", ch);
            break;
        case 'o':printf("%c is a vowel.\n", ch);
            break;
        case 'u':printf("%c is a vowel.\n", ch);
            break;
        
    }
    
    if(ch!='a'||'e'||'i'||'o'||'u')
    {
        printf("This is not vowel");
    }
    

    return 0;
}
