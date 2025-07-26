// Converting celsius to farenheit and vice versa using C = (5/9)(F-32)
#include <stdio.h>
int main() {
    int f, c;
    f = 50; // Temperature in Farenheit
    c = (5.0/9)*(f-32); // Not putting 5 as 5.0 basically evaluates 5/9 as int, which gives 0. Putting 5.0 makes it a float value.
    printf("The temperature in celsius is: %d\n",c);
}