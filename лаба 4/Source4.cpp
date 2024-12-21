#include <stdio.h>
#include <string.h>

// Структура для автомобіля
struct Car {
    char brand[50];
    char model[50];
    int year;
};

// Функція для введення даних автомобіля
void inputCar(struct Car* car) {
    printf("Введіть марку автомобіля: ");
    scanf("%s", car->brand);
    printf("Введіть модель автомобіля: ");
    scanf("%s", car->model);
    printf("Введіть рік випуску автомобіля: ");
    scanf("%d", &car->year);
}

// Функція для виведення даних автомобіля
void outputCar(struct Car car) {
    printf("\nДані автомобіля:\n");
    printf("Марка: %s\n", car.brand);
    printf("Модель: %s\n", car.model);
    printf("Рік випуску: %d\n", car.year);
}

// Головна функція
int main() {
    struct Car car1, car2;

    printf("Введення даних для першого автомобіля:\n");
    inputCar(&car1);

    printf("\nВведення даних для другого автомобіля:\n");
    inputCar(&car2);

    printf("\nРезультати:\n");
    printf("Автомобіль 1:\n");
    outputCar(car1);

    printf("\nАвтомобіль 2:\n");
    outputCar(car2);

    return 0;
}