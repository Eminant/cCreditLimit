//Emily Campa

#include <stdio.h>		
int main (void)			
{
	unsigned int counter = 1;		//Counter int for 3 customers
	int accountNumber;				//Ask for account number
	float beginCred;				//Ask for current credit limit
	float endCred;					//Generate new credit limit = beginCred/2
	float custBalance;				//Ask for curreent balance
	float exceedBalance;			//Check if custBalance > endCred
	
	while (counter < 4)
	{
		printf("Enter Customer Account Number:\n");
		scanf("%d", &accountNumber);
		
		printf("What is this customer's pre-recession credit limit?\n");
		scanf("%f", &beginCred);
		
		printf("What is this customer's existing balance?\n");
		scanf("%f", &custBalance);
		
		endCred = beginCred * 0.5;
		
		printf("New credit limit is: %.2f\n", endCred);
		
		exceedBalance = custBalance - endCred;
		
		if (endCred < custBalance)
		{
			printf("Current balance exceeds new credit limit by: %.2f!\n", exceedBalance);
		}
		
		if (endCred > custBalance)
		{
			printf("Customer's current balance meets new credit limit.\n");
		}
		counter++;
	}
	
}
