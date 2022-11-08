//masīvi - secīgi novietotas vērtības atmiņā, izgūstamas ar viena indifikaatora palīdzību: a[0]; a[1]; a[2];
//alternatīva -a0, a1, a2 - kas nav ērti? - nav iespējama algoritmizācija

//NB! masīva pirmā elementa indekss ir "0"
//NB! masīvam arī ir adrese - tā ir 0. elementa adrese

#include<stdio.h>

int main()
{

int i_array_1[10]; //int lelumu masīva deklarēšana
		   // (piesaukt drīkst, bet vērtības nav zināmas

int i_array_2[3] = {1,2,3}; //int lielumu masīva definēšana
int i_array_3[5] = {4,5,6}; //masīva pēdējie divi elementi būs ar 0 vērtībām
int i_array_with_zeros[5] = {0}; //masīva vērtības ir nulles

int i_array_2D[2][3] = {{7,8,9},{10,11,12}}; // [2 - rindu skaits][3 - kolonu skaits]

printf("masīva i_array_2 adrese: %p\n", i_array_2);
printf("masīva i_array_2 0. elementa adrese: %p\n", &i_array_2[0]);



return 0;
}
