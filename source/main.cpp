#include <string.h>
#include <stdio.h>

#include <switch.h>

int main(int argc, char **argv)
{
    consoleInit(NULL);
    bpcInitialize();
    bpcRebootSystem();
    return 0;
}

