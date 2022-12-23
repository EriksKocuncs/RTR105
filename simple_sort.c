#include<stdio.h>

 int  main(){

    char str1, str2, str3;
    int i;

    printf("Enter 3 letters which You want to sort:\n");
    scanf("%c %c %c", &str1 ,&str2 ,&str3);
    printf("Enter 1 to sort by Ascending \n Enter 2 to sort by Descending\n");
    scanf("%d", &i);

  if(i == 1){

    if (str1 <= str2 && str1 <= str3){ 
       if(str2 <= str3)
            printf("%c, %c, %c \n", str1, str2, str3);
        else
            printf("%c, %c, %c \n", str1, str3, str2);
    }
    else{
        if(str2 <= str1 && str2 <= str3){
            if(str1 <= str3)
                printf("%c, %c, %c \n", str2, str1, str3);
            else
                printf("%c, %c, %c \n", str2, str3, str1);
        }
        else{
            if(str2 <= str1)
                printf("%c, %c, %c \n", str3, str2, str1);
            else
                printf("%c, %c, %c \n", str3, str1, str2);
            }
        }
    }

  if(i == 2){

    if (str1 >= str2 && str1 >= str3){ 
       if(str2 >= str3)
            printf("%c, %c, %c \n", str1, str2, str3);
        else
            printf("%c, %c, %c \n", str1, str3, str2);
    }
    else{
        if(str2 >= str1 && str2 >= str3){
            if(str1 >= str3)
                printf("%c, %c, %c \n", str2, str1, str3);
            else
                printf("%c, %c, %c \n", str2, str3, str1);
        }
        else{
            if(str2 >= str1)
                printf("%c, %c, %c \n", str3, str2, str1);
            else
                printf("%c, %c, %c \n", str3, str1, str2);
            }
        }
    }

   return 0;
 }
