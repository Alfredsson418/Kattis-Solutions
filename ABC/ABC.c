#include <stdio.h>

int main() {

    int num[3] = {0, 0, 0};
    char abc[4];
    int swapped = 1,temp;

    if (scanf("%d%d%d", &num[0], &num[1], &num[2]) != 3) {
        printf("Error with first scanf\n");
        return -1;
    }
    
    if (scanf(" %c%c%c", &abc[0], &abc[1], &abc[2]) != 3) {
        printf("Error with second scanf\n");
        return -1;
    }
    

    do {
        swapped = 0;
        for (int i = 0; i < 2; i++) {
            if (num[i] > num[i + 1]) {
                temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);



    for (int i = 0; i < 3; i++) {
        if (abc[i] == 'A') {
            printf("%d ", num[0]);
        }
        else if (abc[i] == 'B') {
            printf("%d ", num[1]);
        }
        else if (abc[i] == 'C') {
            printf("%d ", num[2]);
        }else {
            printf("error");
        }

    }
    return 0;
}