#include <stdio.h>

void decimal_to_binary(int num) {
    for (int i = 31; i >= 0; i--) {
        
        int bit = (1 << i);
        
        if (num & bit)
           printf("1");

        else 
           printf("0");
    }
}

int main() {
   int num;
  printf("Enter decimal number:\n");
  scanf("%d", &num);
   printf("Your number in Binary is:\n");
  decimal_to_binary(num);
   return 0;
}
