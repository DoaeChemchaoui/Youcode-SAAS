#include <stdio.h>

struct Point { int x, y; };

int main() {
    struct Point p, *ptr = &p;
    ptr->x = 10;
    ptr->y = 20;
    printf("Point: (%d, %d)\n", p.x, p.y);
    return 0;
}
