#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char *argv[])
{



    printf("pid: %d\n", getpid());

    int memory = atoi(argv[1]) * 1024 * 1024;
    int length = (int)(memory / sizeof(int));
    int runTime = atoi(argv[2]);
    int *arr = malloc(memory);

    free(arr);
    return main(argc, argv);
    return 0;
}
