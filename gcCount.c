#include <stdio.h>

double gcCountCalc(char *sequence)
{
    int total = 0;
    int gcCount = 0;
    double res;

    for (int i = 0; sequence[i] != '\0'; i++)
    {
        if (sequence[i] == 'G' || sequence[i] == 'C')
        {
            gcCount++;
        }
        total++;
    }

    res = ((double)gcCount / total) * 100;
    return res;
}
