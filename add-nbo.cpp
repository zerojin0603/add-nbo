#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>

int main(int argc, char const *argv[]){
    
    FILE *file1, *file2;
    uint32_t val1, val2, res;

    file1 = fopen(argv[1], "r");
    file2 = fopen(argv[2], "r");

    fread(&val1, sizeof(val1), 1, file1);
    fread(&val2, sizeof(val2), 1, file2);

    val1=ntohl(val1);
    val2=ntohl(val2);

    res=val1+val2;

    printf("%d(%#x)+%d(%#x)=%d(%#x)", val1, val1, val2, val2, res, res);

    fclose(file1);
    fclose(file2);

    return 0;

}