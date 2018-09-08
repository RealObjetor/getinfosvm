#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int numARGS=0;

    if(argc==1)
    {
        printf("Numero de argumentos introducidos es 0.");
        exit(1);
    }

    for (numARGS==0;numARGS<argc;numARGS++)
    {
        printf("Argumento %d, es %s.\n",numARGS,argv[numARGS]);
    }

    exit(0);
}
