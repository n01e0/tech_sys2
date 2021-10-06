#include <stdio.h>

int main(int argc, char **argv) {
    if (argc < 2)
        return 1;

    char *path = argv[1];
    FILE *f = fopen(path, "r");
    if (f == NULL)
        return 1;

    char buf[0x100] = {0};
    size_t len;
    while ((len = fread(buf, 1, 0x100, f)) != 0)
        fwrite(buf, 1, len, stdout);
}
