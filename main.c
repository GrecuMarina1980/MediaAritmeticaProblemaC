/******************************************************************************

Problemă: Directorul de școală a unui gimnaziu a intrat în clasa a IX-a. 
În clasă era dirigintele cu elevii.
Directorul a cerut următoarele date:
-	Nota medie a fiecărui elev;
-	Nota maximă;
-	Numărul de elevi cu note mai mari sau egale cu 9 (elevi eminenți);
-	Nota medie generală a clasei. 


*******************************************************************************/
#include <stdio.h>
#include<math.h>
int n, neminent=0;
float nmed[35];
float nmax, gmed, s=0, nmax=0;

int main()
{
    printf("Introducem numarul de elevi\n");
    scanf("%d",&n);
    printf("Introducem nota medie a fiecarui elev\n");
    for (int i=0; i<n; i++ )
    scanf("%f", &nmed[i]);
   
    for (int i=0; i<n; i++ )
    {   
        s=s+nmed[i];
        if (nmed[i]>nmax) nmax=nmed[i];
        if (nmed[i]>=9) neminent=neminent+1; 
    }
        gmed=s/n;
        printf("Nota maxima este: %f \n", nmax);
        printf("Numarul de eminenti este: %d \n", neminent);
        printf("Nota medie generala este: %f \n", gmed);
    return 0;
}




