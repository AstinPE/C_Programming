//�������� Z = 40.6 + 0.72 * (X + Y)
//�µ� X, �����µ� Y

#include <stdio.h>

int main(void) {
    int temp, hum;
    printf("�µ��� �Է��ϼ��� : ");
    scanf("%d", &temp);
    printf("�����µ��� �Է��ϼ��� : ");
    scanf("%d", &hum);

    double Z = 40.6 + 0.72 * (temp + hum);
    printf("�������� Z = %.2f", Z);
}