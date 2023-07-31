#include "sun.h"
#include "moon.h"
#include "earth.h"
#include "libcook/fish.h"
#include "libcook/noodle.h"
#include "libcook/chicken.h"
#include <stdio.h>

int main()
{
    printf("theseus do something \r\n");

    sun_rotate();
    moon_rotate();
    earth_rotate();

    cook_chicken();
    cook_fish();
    cook_noodle();

    return 0;
}

