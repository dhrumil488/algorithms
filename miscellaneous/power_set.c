#include <stdio.h>
#include <math.h>

int main() {
    int set_size;
    printf("Please enter set size:");
    scanf("%d", &set_size);

    int i,j;
    char set[set_size];
    for(i=0;i<set_size;i++) {
        printf("Enter set element %d:", i+1);
        scanf(" %c", &set[i]);
    }

    for(i=0;i<set_size;i++) {
        printf("Enter set element %d: %c", i+1, set[i]);
    }


    unsigned int pow_set_size = pow(2, set_size);

    

    for(i=0;i<pow_set_size;i++) {
        for(j=0;j<set_size;j++) {
            if(i & (1<<j)) {
                printf("%c,", set[j]);
            }
        }
        printf("\n");
    } 
    return 0;
}