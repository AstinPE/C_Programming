#include <stdio.h>
#define PI 3.14

int main(void) {
    float radius;
    printf("������ : ");
    scanf("%f", &radius);

    float A = 4 * PI * radius * radius;
    float V = (4.0/3) * PI * radius * radius * radius;

    printf("ǥ���� : %f\n", A);
    printf("���� : %f", V);

    return 0;
}
