#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "rus");

    const double WALL_LENGTH = 20.0;
    const double WALL_HEIGHT = 3.0;
    const double ROLL_LENGTH = 12.0;
    const double ROLL_WIDTH = 1.0;
    const int ROLL_PRICE = 1000;

    double strips_needed = WALL_LENGTH / ROLL_WIDTH;
    double strips_per_roll = ROLL_LENGTH / WALL_HEIGHT;
    int rolls_needed = (int)ceil(strips_needed / strips_per_roll);
    int total_cost = rolls_needed * ROLL_PRICE;

    printf("==================================================\n");
    printf("|                РАСЧЕТ СТОИМОСТИ ОБОЕВ          |\n");
    printf("==================================================\n");
    printf("| УСЛОВИЕ ЗАДАЧИ:                                |\n");
    printf("| Хозяин хочет оклеить обоями длинную стену.     |\n");
    printf("| Длина стены: %.1f м, высота: %.1f м             |\n", WALL_LENGTH, WALL_HEIGHT);
    printf("| Рулон: %.1f м x %.1f м, цена: %d руб.         |\n", ROLL_LENGTH, ROLL_WIDTH, ROLL_PRICE);
    printf("|                                                |\n");
    printf("| РАСЧЕТЫ:                                       |\n");
    printf("| - Необходимо полос: %.1f                       |\n", strips_needed);
    printf("| - Полос из рулона: %.1f                         |\n", strips_per_roll);
    printf("| - Требуется рулонов: %d                         |\n", rolls_needed);
    printf("| - Общая стоимость: %d руб.                   |\n", total_cost);
    printf("|                                                |\n");
    printf("| ОТВЕТ:                                         |\n");
    printf("| Стоимость обоев: %d руб.                     |\n", total_cost);
    printf("| Количество рулонов: %d                          |\n", rolls_needed);
    printf("==================================================\n");

    return 0;
}