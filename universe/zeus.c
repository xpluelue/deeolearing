#include "sun.h"
#include "moon.h"
#include "earth.h"
#include <stdio.h>

int main()
{
    printf("zeus do something \r\n");

    sun_rotate();
    moon_rotate();
    earth_rotate();

    return 0;
}

