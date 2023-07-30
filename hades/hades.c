#include "sun.h"
#include "moon.h"
#include "earth.h"
#include "pig.h"
#include "dog.h"
#include <stdio.h>

int main()
{
    printf("hades do something \r\n");

    sun_rotate();
    moon_rotate();
    earth_rotate();

    pig_die();
    dog_die();

    return 0;
}

