/// Write A Program Which Accept Temperature In Fahrenheit And Convert It Into Celsius. (1 celsius = (Fahrenheit - 32) * (5/9) ) 
/// Input : 10 
/// Output : -12.2222 (10 - 32) * (5/9)
/// Input : 34 
/// Output : 1.11111 (34 - 32) * (5/9)

//Compiler version gcc  6.3.0

#include<stdio.h> 
#include<conio.h>

double FhtoCs(float fTemp) 
{ 
      double Celcius = 0.0;
      
      Celcius = ( ( fTemp - 32 ) * ( 0.5555555 ) );  /// ( 5 / 9 ) = 0.5555555
      
      return Celcius;
} 

int main() 
{ 
     float fValue = 0.0; 
     double dRet = 0.0; 
     
     printf("\n Enter Temperature In Fahrenheit -> "); 
     scanf("%f",&fValue); 
     
     dRet = FhtoCs(fValue); 
     
     printf("\n After Converting Temperature To Celcius Ans Is => %0.5lf \n",dRet); 
     
     getch();
     return 0; 
}
