#include <stdio.h>

int main(void) {
    int sum = 0;
    for(;;) {
        sum = sum + 10;
        if (sum >= 100) 
            break;
    }

    printf("sum ������ ������ ���� %d�Դϴ�. \n", sum);

    return 0;
}