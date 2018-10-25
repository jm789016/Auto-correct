#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXC 50

int main()
{
    printf("Enter text: ");

    char msg[MAXC];
    gets(msg);

    if (islower(msg[0]))

    {
     msg[0] = toupper(msg[0]);
     printf("Auto-correct: \n %s", msg);
    }
    else
    {
      printf("No auto-correct needed.");

    }

    return 0;
}
