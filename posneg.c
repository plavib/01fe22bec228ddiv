#include <stdio.h>

int main() {

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You have entered 0.");
        else
            printf("You have entered a negative number.");
    }
    else
        printf("You have entered a positive number.");

����return�0;
}
