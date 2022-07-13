#include<stdio.h>
#include<conio.h>

void Display( int iNo )
{
                if( iNo < 0 )
                {
                            iNo = 0 - iNo;
                }

                switch( iNo )
                {
                            case 0:
                                    printf("\n\t %d = Zero \n",iNo);
                                    break;


                            case 1:
                                    printf("\n\t %d = One \n",iNo);
                                    break;

                            case 2:
                                    printf("\n\t %d = Two \n",iNo);
                                    break;

                            case 3:
                                    printf("\n\t %d = Three \n",iNo);
                                    break;

                            case 4:
                                    printf("\n\t %d = Four \n",iNo);
                                    break;

                            case 5:
                                    printf("\n\t %d = Five \n",iNo);
                                    break;

                            case 6:
                                    printf("\n\t %d = Six \n",iNo);
                                    break;

                            case 7:
                                    printf("\n\t %d = Seven \n",iNo);
                                    break;

                            case 8:
                                    printf("\n\t %d = Eight \n",iNo);
                                    break;

                            case 9:
                                    printf("\n\t %d = Nine \n",iNo);
                                    break;

                            default:
                                    printf("\n\t Invalid Input...\n\t Please Enter Valid Input [ 0 To 9 Digits ] !!! \n ");
                                    break;
                }
}

int main()
{
                int iValue = 0;

                printf("\n Enter A Digit => ");
                scanf("%d",&iValue);

                Display( iValue );

                return 0;
}
