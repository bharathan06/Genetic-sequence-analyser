#include <stdio.h>

int nucleotideCount(char *sequence, int *numNucleotides)
{
    for (int i = 0; sequence[i] != '\0'; i++)
    {
        switch (sequence[i])
        {
        case 'A':
            numNucleotides[0]++;
            break;
        case 'C':
            numNucleotides[1]++;
            break;
        case 'G':
            numNucleotides[2]++;
            break;
        case 'T':
            numNucleotides[3]++;
            break;
        }
    }
}