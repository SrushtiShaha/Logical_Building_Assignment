#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

int ChkVowel( char CValue )
{
                if( CValue == 'A' || CValue == 'a' || CValue == 'E' || CValue == 'e' || CValue == 'I' || CValue == 'i' || CValue == 'O' || CValue == 'o' || CValue == 'U' || CValue == 'u')
                {
                                return 1;
                }
                else
                {
                                return 0;
                }
}

int main()
{
                char cValue = '\0';
                int Ret = 0;

                printf("\n Enter A Character => ");
                scanf("%c",&cValue);

                Ret = ChkVowel( cValue );

                if( Ret == 1 )
                {
                                printf("\n Entered Character %c Is Vowel.\n",cValue);
                }
                else
                {
                                printf("\n Entered Character %c Is Not Vowel.\n",cValue);
                }

                return 0;
}
