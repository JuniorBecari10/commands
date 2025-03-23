#include <stdio.h>

/*
    'yes' command

    Repeats the supplied arguments, separated by space, followed by '\n',
    or 'y\n' if they are not supplied.

    Usage: yes <words to repeat>
*/
int main(int argc, char *argv[]) {
    if (argc == 1) {
        for (;;)
            printf("y\n");
    }
    else {
        for (;;) {
            for (int i = 1; i < argc; i++) {
                printf("%s", argv[i]);
    
                if (i < argc - 1)
                    printf(" ");
            }
    
            printf("\n");
        }
    }
}
