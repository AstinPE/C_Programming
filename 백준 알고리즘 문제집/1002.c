/*
* ���� �˰��� ������ 1002�� ����
* FIELD : ���� �˰���
* SOLUTION : �� ���� ��ġ���踦 ���� �����Դϴ�.
*            �� ���� �߽���ǥ�� �������� �� ��, ������ ������ ���ϸ� �˴ϴ�.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN -10000
#define MAX 10000
//�Է°����� ��ǥ�� �ִ밪�� �ּҰ�

#define INFINITE -1

#define INNER 1
#define INLINE 0
#define OUTTER -1
//�� ���� �߽��� ��ġ���踦 ��Ÿ���� ���


typedef struct CircleData {
    int X;
    int Y;
    int r;
} CircleData;
//���� ������ ���� ����ü


CircleData** getCase(int TestCase);
int getDistance(CircleData p1, CircleData p2);
int checkCirclePoint(CircleData p1, CircleData p2);


int main(void) {
    int TestCase = -1, i;

    while (TestCase <= 0) {
        printf("Test Case: ");
        scanf("%d", &TestCase);

        if (TestCase <= 0) printf("Test Case�� 0���� Ŀ�� �մϴ�.\n");
    }
    //�׽�Ʈ ���̽��� �Է¹޽��ϴ�.

    CircleData** cases = getCase(TestCase);
    int result;

    for (i = 0; i < TestCase; i++) {
        int DIS = getDistance(cases[i][0], cases[i][1]);
        //�� ���� �߽� ���� �Ÿ�
        int AddDis = cases[i][0].r + cases[i][1].r;
        //�� ���� �������� ��

        CircleData MAX_CIR = cases[i][0].r > cases[i][1].r? cases[i][0] : cases[i][1];
        CircleData MIN_CIR = cases[i][0].r < cases[i][1].r? cases[i][0] : cases[i][1];
        //��ġ���踦 ��Ÿ�� �� ������ �Ǵ� ���� �������� ū ���̹Ƿ� �������� ū ���� ���մϴ�.

        switch(checkCirclePoint(MAX_CIR, MIN_CIR)) {
            case INNER: //���� ���� �߽��� ū �� ���ο� ���� ��
                if (DIS + MIN_CIR.r < MAX_CIR.r) result = 0;
                if (DIS + MIN_CIR.r == MAX_CIR.r) result = 1;
                if (DIS + MIN_CIR.r > MAX_CIR.r) result = 2;
                if (DIS == 0 && MAX_CIR.r == MIN_CIR.r) result = INFINITE;
                break;

            case INLINE: //���� ���� �߽��� ū ���� �ѷ��� ���� ��
                result = 2;
                break;

            case OUTTER: //���� ���� �߽��� �ܺο� ���� ��
                if (DIS > AddDis) result = 0;
                if (DIS == AddDis) result = 1;
                if (DIS < AddDis) result = 2;
                break;
        }

        printf("[Case %d] %d\n", i + 1, result);
    }

    return 0;
}

CircleData** getCase(int TestCase) { //���̽��� ��ǥ�� �Է¹޴� �Լ� �Դϴ�.
    int i;
    CircleData** cases = (CircleData**) malloc(sizeof(CircleData*) * TestCase);

    for (i = 0; i < TestCase; i++) {
        cases[i] = (CircleData*) malloc(sizeof(CircleData) * 2);
        printf("[Case %d] position: ", i + 1);

        CircleData p1 = {MIN - 1, MIN - 1, -1};
        CircleData p2 = {MIN - 1, MIN - 1, -1};

        while (p1.X < MIN || p1.X > MAX || p1.Y < MIN || p1.Y > MAX ||
               p2.X < MIN || p2.X > MAX || p2.Y < MIN || p2.Y > MAX ||
               p1.r < 0 || p1.r > MAX) {

            scanf("%d %d %d %d %d %d", &p1.X, &p1.Y, &p1.r, &p2.X, &p2.Y, &p2.r);
            cases[i][0] = p1;
            cases[i][1] = p2;

            if (p1.X < MIN || p1.X > MAX || p1.Y < MIN || p1.Y > MAX ||
                p2.X < MIN || p2.X > MAX || p2.Y < MIN || p2.Y > MAX ||
                p1.r < 0 || p1.r > MAX) {

                printf("��ǥ�� -10000�̻� 10000������ ����, �Ÿ��� 10000���� �ڿ����� �Է��ؾ��մϴ�.\n");
                printf("[Case %d] position: ", i + 1);

            }
        }
    }

    return cases;
}

int getDistance(CircleData p1, CircleData p2) { //�� ���� �߽ɰ� �Ÿ��� ���մϴ�.
    return (int)( sqrt( pow(p1.X - p2.X, 2) + pow(p1.Y - p2.Y, 2) ) );
}

int checkCirclePoint(CircleData p1, CircleData p2) { //�� ���� �߽��� ��ġ���踦 ��ȯ�մϴ�.
    int position = pow(getDistance(p1, p2), 2) - pow(p1.r, 2);

    if (position > 0) return OUTTER;
    else if (position == 0) return INLINE;
    else return INNER;
}