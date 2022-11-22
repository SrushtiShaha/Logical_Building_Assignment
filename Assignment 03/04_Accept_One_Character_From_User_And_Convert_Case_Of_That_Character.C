#include<stdio.h>
#include<conio.h>

void DisplayConvert( char CValue )
{
                if( CValue >= 'A' && CValue <= 'Z' )
                {
                                printf("\n %c \n",CValue + 32);
                }
                else
                {
                                printf("\n %c \n",CValue - 32);
                }
}

int main()
{
                char cValue = '\0';

                printf("\n Enter A Character => ");
                scanf("%c",&cValue);

                DisplayConvert( cValue );

                return 0;
}
