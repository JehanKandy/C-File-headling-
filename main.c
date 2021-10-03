#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp =fopen("d://C Programming/test.txt","w+");
    fprintf(fp,"This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n",fp);
    fclose(fp);
    printf("File Created successfully \n");

    return 0;
}
