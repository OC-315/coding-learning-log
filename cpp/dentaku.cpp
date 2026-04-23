#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("数を入力 (例: 2 + 3): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 != 0) result = num1 / num2;
            else { printf("0除算エラー\n"); return 1; }
            break;
        default: printf("無効な演算子\n"); return 1;
    }
    printf("結果: %.2f\n", result);
    return 0;
}
