#ifndef ADMINWINDOW_H_INCLUDED
#define ADMINWINDOW_H_INCLUDED
#include "BankAccount.h"
#include "LinkedList.h"

void CreateNewAccount(LinkedListEntry,LinkedList*);
void OpenExistingAccount(LinkedList*,int);
void MakeTransaction(LinkedList*,int,double);
void ChangeAccountStatus(LinkedList*,char*,int);
void GetCash(LinkedList*,double,int);
void DepositAccount(LinkedList*,double,int);
void MainMenu();
void ExitSystem();


#endif // ADMINWINDOW_H_INCLUDED
