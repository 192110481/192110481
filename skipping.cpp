#include <stdio.h>
int main()
{
      int i = 1;
      while(i<=10)
      {
            if(i==6||i==8)
            {
                  i++;
                  continue; 
            }
            printf("%d ", i);
            i++;
      }   
      return 0;
}


