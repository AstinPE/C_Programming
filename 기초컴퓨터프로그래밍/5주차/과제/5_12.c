#include <stdio.h>

int main(void) {
    int num;
    int digit_1, digit_10, digit_100;

    printf("�� �ڸ� ���� �Է� : ");
    scanf("%d", &num);

    digit_100 = num / 100;
    digit_10 = (num % 100) / 10;
    digit_1 = num % 10;

    if(digit_100 % 2 == 0)
        printf("100�� �ڸ� %d : ¦�� \n", digit_100);
    else
        printf("100�� �ڸ� %d : Ȧ�� \n", digit_100);

    if(digit_10 % 2 == 0)
        printf(" 10�� �ڸ� %d : ¦�� \n", digit_10);
    else
        printf(" 10�� �ڸ� %d : Ȧ�� \n", digit_10);

    if(digit_1 % 2 == 0)
        printf("  1�� �ڸ� %d : ¦�� \n", digit_1);
    else
        printf("  1�� �ڸ� %d : Ȧ�� \n", digit_1);

    return 0;
}