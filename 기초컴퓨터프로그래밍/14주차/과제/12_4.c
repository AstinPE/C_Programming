#include <stdio.h>

int main(void) {
    FILE *fp;

    char name[10], tel[15];
    int save, i;

    fp = fopen("12_4.txt","w");
    for (i = 0; i < 3; i++) {
        printf("%d��° �̸�: ", i + 1);
        scanf("%s", name);

        printf("����ó: ");
        scanf("%s", tel);

        printf("�����: ");
        scanf("%d", &save);

        fprintf(fp, "%s\t %s\t %d\n", name, tel, save);
    }

    fclose(fp);

    return 0;
}