#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
    printf("Total number of system calls made by current process: %d\n", info(2));
    printf("Total number of processes: %d\n", info(1));
    printf("Total number of system calls made by current process: %d\n", info(2));
    printf("Total number of memory pages used by current process: %d\n", info(3));
    printf("Total number of system calls made by current process: %d\n", info(2));
    exit(0);
}