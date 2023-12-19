#include <stdio.h>


int main(){
    int len = 1000;
    int unset = 0;
    char string[len];
    scanf("%s", string);
    
    // printf("%s\n", string);

    for (int i = 0; i < len; i++) {
        
        if (string[i] == 117){
            // printf("%s %c %i\n", string, string[i], i);
            unset += 1;
            
        }
        
    }
    
    printf("%i", unset);
}