
#include <stdio.h>

int main()
{
    int wej; //program przyjmuje do 1000 argumentów wejścia
    int pozycja[1000];
    pozycja[0] = 0;
    int n = 0;

    printf("Stan poczatkowy to q0. Prosze podac ciag skladajacy sie z 0 lub 1. Wszystkie znaki musza byc oddzielone spacja!\n");
    printf("Zeby przerwac dzialanie programu prosze o podanie dowolnego znaku nie nalezacego do alfabetu.\n");
    
    printf(" ------         0  ------\n");
    printf("|      | -------->|      |\n");
    printf("|  q0  | 1        |  q1  |\n");
    printf("|      | <--------|      |\n");
    printf(" ------            ------\n");
    printf("  | ^ 0              | ^ 0\n");
    printf("  | |                | |\n");
    printf("1 v |              0 v |\n");
    printf(" ------         1  ------\n");
    printf("|      | -------->|      |\n");
    printf("|  q2  | 1        |  q3  |\n");
    printf("|      | <--------|      |\n");
    printf(" ------            ------\n");



    while (scanf_s(" %d", &wej) == 1)
    {
      if (wej != 0 && wej != 1)
            break;

      if (wej == 0)
      {
        switch (pozycja[n])
        {
              case 0:
                  pozycja[n + 1] = 1;
                  break;
              case 1:
                  pozycja[n + 1] = 3;
                  break;
              case 2:
                  pozycja[n + 1] = 0;
                  break;
              case 3:
                  pozycja[n + 1] = 1;
                  break;
              }
      }
      else
      {
        switch (pozycja[n])
        {
              case 0:
                  pozycja[n + 1] = 2;
                  break;
              case 1:
                  pozycja[n + 1] = 0;
                  break;
              case 2:
                  pozycja[n + 1] = 3;
                  break;
              case 3:
                  pozycja[n + 1] = 2;
                  break;
        }
      }

      printf("pozycja to q%d\n", pozycja[n + 1]);
      n++;
    }



  if (pozycja[n] != 0)
    {
        printf("Ciag nie zostal zaakceptowany!");
    }
    else
    {
        printf("\nCiag zostal zaakceptowany!\nq0");
        for (int i = 1; i <= n; i++)
        {
            printf(" --> q%d", pozycja[i]);
        }
   }
    
}
