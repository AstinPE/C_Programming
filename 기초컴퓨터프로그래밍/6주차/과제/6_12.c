#include <stdio.h>

int main(void) {
    int num;
    do {
        printf("���� �Է� : ");
        scanf("%d", &num);
    } while (num > 0);

    printf("����ڰ� �Է��� ���� : %d\n", num);

    return 0;
}