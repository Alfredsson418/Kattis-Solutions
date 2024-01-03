#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 100

int main() {

    char input[LENGTH] = { 0 };
    
    int sum = 0, numTemp;
    char *save1_ptr, *save2_ptr;

    if (!fgets(input, LENGTH - 1, stdin)) {
        printf("Error");
    }

    // printf("%s", input);
    char * token = strtok_r(input, ";", &save1_ptr);
    while( token != NULL ) {
        if(!(strchr(token, '-') == NULL)){
            char * num1 = strtok_r(token, "-", &save2_ptr);
            char * num2 = strtok_r(NULL, "-", &save2_ptr);
            sum += atoi(num2) - atoi(num1) + 1;
        } else {
            sum += 1;
        }
        
                
        token = strtok_r(NULL, ";", &save1_ptr); 
        
   }

    printf("%d", sum);

    return 0;


}