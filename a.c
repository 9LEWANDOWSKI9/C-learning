#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    int x, y;
    double y2;
    double PI = 3.14159265359;

    for (int angle = 0; angle < 360; angle++) {
        system("cls");

        for (y = 10; y >= 1; y--) {
            for (x = 1; x < 80; x++) {
                y2 = (double)y / 5 - 1;
                if (((x - 40) * (x - 40) + (10 - y) * (10 - y) <= 20) || ((x - 35) * (x - 35) + (y - 10) * (y - 10) <= 25) || ((x - 45) * (x - 45) + (y - 10) * (y - 10) <= 25) || (y == 8 && (x - 37) * (x - 43) <= 0))
                    putchar('*');
                else if (x == 40 && y == 10)
                    putchar('v');
                else if (x == 40 && (int)y2 == (int)(10 - 3 * sin(angle * PI / 180)))
                    putchar('U');
                else
                    putchar(' ');
            }
            putchar('\n');
        }
        Sleep(50);
    }

    return 0;
}
