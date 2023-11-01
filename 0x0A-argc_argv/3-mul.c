#include <unistd.h>
#include "main.h"
int main(int argc, char **argv)
{
    int total;

    if (argc < 2) {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (1);
    }

    total = (int) *argv[1] * (int) *argv[2];

    // Replace printf() with _putchar()
    // printf("%d\n", total);
    for (int i = 0; total > 0; i++) {
        _putchar((total % 10) + '0');
        total /= 10;
    }
    _putchar('\n');

    return (0);
}
