#include <conio.h>
#include <stdio.h>

main()
{
   int n,i,bil;
   printf("Jumlah angka yang di tampilkan disini sobat codar? = ");scanf(" %d",&n);
 
   for(i=1; i<=n; i++)
    {
      bil=(i*2-1)*(i*2-1);
      printf(" %d",bil);
    }
  getch();
}
