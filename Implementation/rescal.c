#include<stdio.h>

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
int r1,r2;

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
int main(void)
{
  menu();

  if(menusel==1)
  {
	getBands();
  }
  if(menusel==2)
  {
  	serpal();
  }
  else
  {
  printf("Invalid Input");
  }
}



void greeting()
{
  printf("\nWelcome to the Resistor Color Code Calculator!");
  printf("\nWritten By: Cory Harkins");
  printf("\nECET 3710 || Fall 2014");
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

/*void lowerfyThree()
{
  for(int i=0; colorOne[i]; i++)
	{
		colorOne[i] = tolower(colorOne[i]);
	}
  for(int i=0; colorTwo[i]; i++)
	{
		colorTwo[i] = tolower(colorTwo[i]);
	}
  for(int i=0; colorThree[i]; i++)
	{
		colorThree[i] = tolower(colorThree[i]);
	}
}

void lowerfyFour()
{
  for(int i=0; colorOne[i]; i++)
	{
		colorOne[i] = tolower(colorOne[i]);
	}
  for(int i=0; colorTwo[i]; i++)
	{
		colorTwo[i] = tolower(colorTwo[i]);
	}
  for(int i=0; colorThree[i]; i++)
	{
		colorThree[i] = tolower(colorThree[i]);
	}
  for(int i=0; colorFour[i]; i++)
	{
		colorFour[i] = tolower(colorFour[i]);
	}
}*/

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
	if(serpalsel==2)
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
	scanf("%d",&r1);
	printf("\nEnter the value of 1st resistor in Ohm\n");
	scanf("%d",&r2);
	printf("The net resistance is %d Ohms",(r1+r2));
}

void paracal()
{
	printf("Enter the value of 1st resistor in Ohm\n");
	scanf("%d",&r1);
	printf("\nEnter the value of 1st resistor in Ohm\n");
	scanf("%d",&r2);
	printf("The net resistance is %d Ohms",(1/((1/r1)+(1/r2))));
}
