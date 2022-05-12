#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED
#include "STD_Types.h"


typedef struct Bank_Account
{
 char *Full_Name;
 char *Full_Address;
 char *National_ID;
 int Age;
 char *Bank_Account_ID;
 char Guardian;
 char *Guardian_National_ID;
 char *Account_Status;
 double Balance;
 char *Password;

}Bank_Account;


#endif // BANKACCOUNT_H_INCLUDED
