#include <stdio.h>
#include <string.h>

// ��������� ��� ���������
struct Car {
    char brand[50];
    char model[50];
    int year;
};

// ������� ��� �������� ����� ���������
void inputCar(struct Car* car) {
    printf("������ ����� ���������: ");
    scanf("%s", car->brand);
    printf("������ ������ ���������: ");
    scanf("%s", car->model);
    printf("������ �� ������� ���������: ");
    scanf("%d", &car->year);
}

// ������� ��� ��������� ����� ���������
void outputCar(struct Car car) {
    printf("\n��� ���������:\n");
    printf("�����: %s\n", car.brand);
    printf("������: %s\n", car.model);
    printf("г� �������: %d\n", car.year);
}

// ������� �������
int main() {
    struct Car car1, car2;

    printf("�������� ����� ��� ������� ���������:\n");
    inputCar(&car1);

    printf("\n�������� ����� ��� ������� ���������:\n");
    inputCar(&car2);

    printf("\n����������:\n");
    printf("��������� 1:\n");
    outputCar(car1);

    printf("\n��������� 2:\n");
    outputCar(car2);

    return 0;
}