#include"stdio.h"
#include"greetings.h"

//variables
int bandChoice;
int serpalsel;
int menusel;
int colorOne;
int colorTwo;
int colorThree;
int colorFour;
float codeOne;
float codeTwo;
float codeThree;
float codeFour;
double r1,r2;

//functions
void greeting();

void serpal();
void sercal();
void paracal();
void menu();
void getBands();
void threeBands();
void fourBands();
void colorCodes();
void lowerfyThree();
void lowerfyFour();
void calculateThree();
void calculateFour();

//program start
void main()

{
greetings();
  menu();

  if(menusel==1)
  {
	getBands();
	if(bandChoice==3)
	{
		threeBands();
		calculateThree();
	}
	else
	{
		fourBands();
		calculateFour();
	}
	
  }
  else if(menusel==2)
  {
  	serpal();
  }
  else
  {
  printf("Invalid Input");
  }
}



void getBands()
{
  printf("\n\n Would you like to enter 3 or 4 bands? ");
  scanf("%d",&bandChoice);
}

void colorCodes()
{
  printf("\n\nThe available color inputs are: ");
  printf("\n\n\t1.Black\n\t2.Brown\n\t3.Red\n\t4.Orange\n\t5.Yellow\n\t6.Green\n\t7.Blue\n\t8.Violet\n\t10.Gray\n\t11.White\n\n");
}

void threeBands()
{
  printf("\nPlease enter your first band: ");
  scanf("%d",&colorOne);
  printf("\nWell done, now your second: ");
  scanf("%d",&colorTwo);
  printf("\nNice, and finally your third: ");
  scanf("%d",&colorThree);
}

void fourBands()
{
  printf("\nPlease enter your first band: ");
  scanf("%d",&colorOne);
  printf("\nWell done, now your second: ");
  scanf("%d",&colorTwo);
  printf("\nNice, and finally your third: ");
  scanf("%d",&colorThree);
  printf("\nOk! Now  your fourth: ");
  scanf("%d",&colorFour);

}

void calculateThree()
{
	printf("The resistor is %d%dx10^%d Ohm",colorOne-1,colorTwo-1,colorThree-1);
}

void calculateFour()
{}

void menu()
{
	printf("\nHow can i help you..???\n");
	printf("1.Resistor value calculator \n2. Series Parallel Calculator\n");
	scanf("%d",&menusel);
}

void serpal()
{
	printf("1.Series \n2.Parallel\n");
	scanf("%d",&serpalsel);
	if(serpalsel==1)
	{
		sercal();
	}
	else if(serpalsel==2)
	{
		paracal();
	}
	else
	{
		printf("Invalid Input");
	}
}

void sercal()
{
	printf("Enter the value of 1st resistor in Ohm\n");
	scanf("%lf",&r1);
	printf("\nEnter the value of 1st resistor in Ohm\n");
	scanf("%lf",&r2);
	printf("The net resistance is %lf Ohms",(r1+r2));
}

void paracal()
{
	printf("Enter the value of 1st resistor in Ohm\n");
	scanf("%lf",&r1);
	printf("\nEnter the value of 1st resistor in Ohm\n");
	scanf("%lf",&r2);
	printf("The net resistance is %lf Ohms",(1/((1/r1)+(1/r2))));
}
