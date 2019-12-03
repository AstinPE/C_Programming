#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;

    char name[10], tel[15];
    int save, state;

    fp = fopen("12_4.txt", "r");
    if (fp == NULL) {
        printf("�ش� ������ �������� ����.");
        exit(1);
    }
    printf("�̸� \t ����ó \t �����\n");

    while(1) {
        state = fscanf(fp, "%10s %15s %d", name, tel, &save);

        if (state == EOF) break;

        printf("%s \t %s\t %d\n", name, tel, save);
    }

    fclose(fp);

    return 0;
}