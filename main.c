#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include "blech/control.h"

#define N   1

int main (int argc, char **argv )
{
    blc_blech_01control01_init();
    blc_blech_01control01_tick();

    while(1)
    {
        sleep(1);
        blc_blech_01control01_tick();
    }

    return 0;
}

void hello (void)
{
    printf("Hello, this is Blech!\n");
}

void ping (void)
{
    printf("PING\n");
}

void pong (void)
{
    printf("PONG\n");
}