#include<stdio.h>

int main(){
if(1); // iekš () var būt "0" vai bitu sēcība, kas satur kaut vienu bitu ar 1

int a = 10;
/*
if(a > 7){ // ja a > 7 -> 0000 0000  0000 0000  0000 0000  0000 0001

 printf("viena darbība, kas izpildās, ja nosācījums ir spēkā\n");
 printf("otrā darbība\n");
 printf("trešā darbība\n");
 }
*/
if(a < 7){

 printf("viena darbība, kas izpildās, ja nosācījums ir spēkā\n");
 printf("otrā darbība\n");
 printf("trešā darbība\n");
 }
else {
 printf("nosacījums nav spēkā!!!\n");
}

return 0;
}
