//Name: GUO, Yuzhou
//ID: 260715042

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUZZ_SIZE 1024
int isdigit(int c);
  
  
int main (int argc, char *argv[])
{
        char s[BUZZ_SIZE];     //since we are reading line by line, try to give the s    tring container a large size.
        char tag1[10] = "#A#";
        char tag2[10] = "#B#";

        FILE *fp;
        fp = fopen(argv[1], "r");

        if (fp ==NULL)     //if the user doesn't enter a valid path, return and stop     the program.
        {
                printf("Error: bad file\n");
                return -1;
        }

        if (isdigit(argv[2]==0)||isdigit(argv[3]==0))
        {
                printf("Error: bad float arg\n");
                return -1;
        }

        float a = atof(argv[2]);
        float b = atof(argv[3]); //change the string argument to floating numbers.

        if (fp)
        {
                while (fgets(s, BUZZ_SIZE, fp) !=NULL)
                {
                        if (strstr(s, tag1)!=NULL)
                        {
                                printf ("a= %.6f\n", a);
                                continue;
                        }
                        if (strstr(s, tag2)!=NULL)
                        {
                                printf("b= %.6f\n", b);
                                continue;
                        }                   //basically we just delete the whole line     and add the new one by ourselves.
                        printf("%s", s);
                }
                        fclose(fp);
        }
        return 0;
}

