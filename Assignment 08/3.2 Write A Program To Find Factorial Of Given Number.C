/// If The User Gives Negative Odd Number Then Answer Will Be Negative Else If User Gives Negative Even Number Then Answer Will Be Positive...

#include<stdio.h>
#include<conio.h>

int Factorial( int iNo )
{
                int i = 1, Temp = 1;

                i = 1;

                while( iNo >= i )
                {
                                Temp = Temp * i;
                                i++;
                }

                i = -1;

                while( iNo <= i )
                {                                                        /// Temp = 1, i = -1, iNo = 2
                                Temp = Temp * i;                         /// (Temp) -1 = +1 * -1
                                i--;                                     ///        +2 = -1 * -2
                }

                return Temp;
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                iRet = Factorial( iValue );

                printf("\n Factorial Of %d Is %d. \n",iValue,iRet);

                return 0;
}
