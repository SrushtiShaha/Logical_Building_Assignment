#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[20] = {'\0'};
        int i = 0, Sps = 0;

        printf("\n Enter A String -> ");
        gets( cSrc );

        while( cSrc[i] != '\0' )
        {
                if( cSrc[i] == ' ' )
                {
                        Sps++;
                }
                i++;
        }

        printf("\n\n Length Of Given String <%s> Is -> %d. \n", cSrc, Sps);

        getch();
        return 0;
}
