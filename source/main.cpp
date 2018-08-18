#include <string.h>
#include <stdio.h>

#include <switch.h>

int main(int argc, char **argv)
{
    gfxInitDefault();
    consoleInit(NULL);
    bpcInitialize();
    bpcRebootSystem();
    return 0;
}

