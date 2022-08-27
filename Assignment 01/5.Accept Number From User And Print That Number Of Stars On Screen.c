#include <stdio.h>
#include <conio.h>

void Accept(int iNo)
{
        int iCnt = 0;
        
        for( iCnt = 1; iNo >= iCnt; iCnt++ )
        {
                printf(" * ");
        }
}

int main()
{
        int iValue = 0;
        
        iValue = 5;
        
        Accept(iValue);
        
        getch();
        return 0;
}
