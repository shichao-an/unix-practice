#include <dirent.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{

    DIR *dp;
    struct dirent *dirp;

    if (argc != 2) {
        fprintf(stderr, "usage: ls directory_name\n");
        exit(1);
    }

    if ((dp = opendir(argv[1])) == NULL) {
        fprintf(stderr, "can't open %s: %s\n", argv[1], strerror(errno));
        exit(errno);
    }

    while ((dirp = readdir(dp)) != NULL)
        printf("%s\n", dirp->d_name);

    closedir(dp);
    exit(0);
}
