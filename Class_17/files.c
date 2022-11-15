#include<stdio.h>

int main(void)
 {
 FILE *fp;
 fp = fopen("teksts.dat", "rt");
            // kur (var norādīt ceļu) un ko (faila nosaukums)
           // kādām nolūkām
char ch;

 if(fp == NULL)
  {
  printf("failu neizdevās atvērt.\n");
  return 100;
  }

while((ch=fgetc(fp)) != EOF)
 putc(ch, stdout);

fclose(fp);


 return 0;
 }
