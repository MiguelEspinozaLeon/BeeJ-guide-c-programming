#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int i;
    i = 2;
    float f = 3.14;
    char *s = "Hello, world!"; //char * , char pointer is the string type
    printf("%s i = %d and f = %f!\n", s, i, f);


    //Boolean types
    bool x = true;
    if (x) {
        printf("x is true!\n");
        x = false;
    }

    //sizeof operator (size in bytes of the type of the expression)
    //compile-time operation
    int a = 999;
    printf("%zu\n" , sizeof a);
    printf("%zu\n", sizeof(2+7));
    printf("%zu\n", sizeof 3.14);
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(int));

    //flow-control
    // while(1){
    //     printf("1 is always true \n");
    // }
    int r;
    do {
        r = rand() % 100;
        printf("%d\n", r);
    } while (r != 37);

    for ( i = 0; i < 10; i++){
        printf("i is %d\n", i);
    }

    int goat_count = 2;
    switch (goat_count) {
        case 0:
            printf("You have no goats \n");
            break;
        case 1: 
            printf("You have 1 goat \n");
            break;
        case 2: 
            printf("You have 2 goats \n");
            break;
        default:
            printf("You have a lot of goats \n");
            break;
    }


    

}