#include<stdio.h> 
main() 
{ 
 int i,choice; 
 float cash=0; 
 char c; 
 
 do{ 
  printf("Enter\n1-Withdraw\n2-Deposit\n3-Check Balance\n"); 
 scanf("%d",&choice); 
 switch(choice) 
 { 
  case 1: 
  { 
   int withdraw; 
   printf("Enter Amount to withdraw\n"); 
   scanf("%d",&withdraw); 
   if(withdraw%100==0) 
   { 
    if(cash>=withdraw) 
        { 
        cash-=withdraw; 
        printf("Amount After withdrawl of cash is %f\n",cash); 
       } 
       else 
    { 
    printf("You don't have enough Amount to Withdraw.Please Deposit Amount\n"); 
        } 
   } 
   else 
   { 
    printf("Enter Withdrawl Amount in 100's\n"); 
   } 
   break; 
  } 
  case 2: 
  { 
   int deposit; 
   printf("Enter Amount to deposit\n"); 
   scanf("%d",&deposit); 
   if(deposit%100==0) 
   {  
       cash=cash+deposit; 
       printf("Balance After Depositing Amount is %f\n",cash); 
   } 
   else 
   { 
    printf("Please Enter Amount in 100's\n"); 
   } 
   break; 
  } 
  case 3: 
  { 
   printf("Balance in the Account is %.2f\n",cash); 
   break; 
  } 
  default : 
  { 
   printf("Enter Valid Choice\n"); 
   break; 
  } 
 } 
 printf("To Continue Press 'Y' else any letter\n"); 
 fflush(stdin); 
 scanf("%c",&c); 
   }while(c=='y' || c=='Y'); 
   printf("Thanks for using our ATM\n");
}