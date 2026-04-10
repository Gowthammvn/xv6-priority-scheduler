#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    if(argc != 3){
        printf("Usage: setpriority pid priority\n");
        exit(1);
    }

    int pid = atoi(argv[1]);
    int priority = atoi(argv[2]);

    setpriority(pid, priority);

    exit(0);
}