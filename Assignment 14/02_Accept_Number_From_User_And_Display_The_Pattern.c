/// Input  : 5
/// Output : 5 # 4 # 3 # 2 # 1 #

#include <stdio.h>
#include <conio.h>

void Pattern( iNo )
{           
            while( iNo > 0 )
            {
                        printf(" %d \t # \t ",iNo);
                        
                        iNo--;
            }
            
            return;
}

int main()
{
            int iValue = 0;
            
            printf("\n Enter Number Of Elements => ");
            scanf("%d",&iValue);
            
            Pattern( iValue);
            
            getch();
            return 0;
}
