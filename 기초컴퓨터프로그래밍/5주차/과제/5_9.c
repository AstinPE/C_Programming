#include <stdio.h>

int main(void) {
    int num;

    printf("1~10 ���� ���� �Է� : ");
    scanf("%d", &num);

    switch(num) {
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            printf("�Է� �� %d�� ¦��\n", num);
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            printf("�Է� �� %d�� Ȧ��\n", num);
            break;
        default:
            printf("�ٽ� �Է��ϼ���.\n");
    }

    return 0;
}