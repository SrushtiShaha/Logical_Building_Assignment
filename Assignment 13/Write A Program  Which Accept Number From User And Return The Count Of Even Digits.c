#include <stdio.h>
#include <conio.h>

int CountEven( int iNo )
{
            int iRes = 0, iCnt = 0;
            
            while( iNo > 0 )
            {
                        iRes = iNo % 10;
                        
                        if( iRes % 2 == 0 )
                        {
                                    iCnt++;
                        }
                        
                        iNo = iNo / 10;
            }
            
            return iCnt;
}

int main()
{
            int iValue = 0, iRet = 0;
            
            printf("\n Enter A Number => ");
            scanf("%d",&iValue);
            
            iRet = CountEven( iValue );
            
            printf("\n %d \n",iRet);
            
            getch();
            return 0;
}
