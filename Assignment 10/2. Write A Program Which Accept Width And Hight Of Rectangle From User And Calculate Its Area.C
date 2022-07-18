/// Area = Width * Height

#include<stdio.h>
#include<conio.h>

double RectArea( float fWidth, float fHeight )
{
                double Area = 0.0;

                Area = fWidth * fHeight;

                return Area;
}

int main()
{
                float fValue1 = 0.0, fValue2 = 0.0;
                double dRet = 0.0;

                printf("\n Enter Width => ");
                scanf("%f",&fValue1);

                printf("\n Enter Height => ");
                scanf("%f",&fValue2);

                dRet = RectArea( fValue1, fValue2 );

                printf("\n Area Of Rectangle Is => %lf \n",dRet);

                return 0;
}
