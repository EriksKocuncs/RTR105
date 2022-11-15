#include <stdio.h>

int main()
{
  char string [256];
  printf ("Insert your name: ");
  gets (string);
  printf ("Your name is: %s\n",string);

    FILE * pFile;
   char mystring [100];

   pFile = fopen ("myname.txt" , "r");
   if (pFile == NULL) perror ("Error opening file");
   else {
     if ( fgets (mystring , 100 , pFile) != NULL )
       puts (mystring);
     fclose (pFile);
   }


 return 0;
}
