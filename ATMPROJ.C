#include<stdio.h>
int main()
{
int pin= 1234;
int enteredpin;
int choice;
float balance=1000;
float deposit, withdraw;
printf("Enter your pin: ");
scanf("%d",&enteredpin);
if (enteredpin==pin)
{
printf("Login successful\n");
}
else
{
printf("Invalid pin\n");
return 0;
}
do
{
printf("\n=====ATM MENU=====\n");
printf("Balance enquiry\n");
printf("Deposit\n");
printf("Withdraw\n");
printf("Exit\n");
printf("Enter your choice : ");
scanf("%d",&choice);
switch (choice)
{
case 1 : printf("Balance available :%f ",balance); break;
case 2 : printf("Enter your deposit amount : ", deposit);
	 scanf("%f", &deposit);
	 balance+=deposit;
	 printf("Deposit successful\n");
	 printf("Thankyou\n");
	 break;
case 3 : if (withdraw > balance)
	    printf("Insufficient fund\n");
	 else
	 {
	   printf("Enter your withdrawal amount: ",withdraw);
	   scanf("%f", &withdraw); balance-=withdraw;
	   printf("Withdraw successful\n");
	   printf("Thankyou\n");
	 }
	 break;

case 4 : printf("Thank you\n");break;
default:
       printf("Invalid choice\n");
}
}while(choice!=4);
return 0;
}

