#include <stdio.h>

int main(void) {
    char menu;
    printf("���� ���� (w-��, c-Ŀ��, g-����) : ");
    scanf("%c", &menu);

    switch(menu) {
        case 'w':
            printf("���Դϴ�.\n");
            break;
        case 'c':
            printf("Ŀ���Դϴ�.\n");
            break;
        case 'g':
            printf("�����Դϴ�.\n");
            break;
        default:
            printf("�ش� �޴��� �����ϴ�.\n");
    }

    return 0;
}