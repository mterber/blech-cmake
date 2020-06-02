#include <unistd.h>
#include <stdio.h>
#include "blech/control.h"

#define N   1

int main (int argc, char **argv )
{
    blc_blech_control_init();
    blc_blech_control_tick();

    while(1)
    {
        sleep(1);
        blc_blech_control_tick();
    }

    return 0;
}

void blc_control_hello (void)
{
    printf("Hello, this is Blech!\n");
}

void blc_control_ping (void)
{
    printf("PING\n");
}

void blc_control_pong (void)
{
    printf("PONG\n");
}