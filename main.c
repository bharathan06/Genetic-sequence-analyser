#include <stdio.h>
#include <stdlib.h>

int nucleotideCount(char *sequence, int *numNucleotides);
double gcCountCalc(char *sequence);

int main()
{
    int numSequences;
    printf("Enter the number of sequences: ");
    scanf("%d", &numSequences);

    // Initialization of Dimension 1
    char **sequences = (char **)malloc(numSequences * sizeof(char *));
    int **numNucleotides = (int **)malloc(numSequences * sizeof(int *));
    double *gcCount = (double *)malloc(numSequences * sizeof(double));

    for (int i = 0; i < numSequences; i++)
    {
        sequences[i] = (char *)malloc(100 * sizeof(char));
        numNucleotides[i] = (int *)malloc(4 * sizeof(int));
        gcCount[i] = 0.0;

        printf("Enter the genetic sequence: \n");
        scanf("%s", sequences[i]);
        nucleotideCount(sequences[i], numNucleotides[i]);
        gcCount[i] = gcCountCalc(sequences[i]);
    }

    printf("\n Analysis Results: ");
    for (int i = 0; i < numSequences; i++)
    {
        printf("\nFor sequence number: %d", i + 1);
        printf("\n A: %d", numNucleotides[i][0]);
        printf("\n C: %d", numNucleotides[i][1]);
        printf("\n G: %d", numNucleotides[i][2]);
        printf("\n T: %d", numNucleotides[i][3]);
        printf("\nThe gcCount: %.2lf", gcCount[i]);
        printf("\n");
    }

    for (int i = 0; i < numSequences; i++)
    {
        free(sequences[i]);
        free(numNucleotides[i]);
    }
    free(gcCount);

    return 0;
}