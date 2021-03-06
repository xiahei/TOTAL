#include <stdio.h>
#include "pe12-3a.h"
int main (void)
{
    int mode;
    float distant = 0;
    float fuel = 0;

    printf ("Enter 0 for metric mode, 1 for US mode: ");
    scanf ("%d", &mode);
    while (mode >= 0)
    {
        set_mode (&mode);
        get_info (mode, &distant, &fuel);
        show_info (mode, distant, fuel);
        printf ("Enter 0 for metric mode, 1 for US mode: ");
        printf (" (-1 to quit): ");
        scanf ("%d", &mode);
    }
    printf ("Done.\n");
    return 0;
}
