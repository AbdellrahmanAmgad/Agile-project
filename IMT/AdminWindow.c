#include <stdlib.h>
#include <stdio.h>
#include "AdminWindow.h"
#include "BankAccount.h"
#include "STD_Types.h"
#include "LinkedList.h"

void CreateNewAccount(LinkedListEntry,LinkedList*){
    printf("\n\n  CreateNewAccount");
}

void MakeTransaction(LinkedList*,int,double){
    printf("\n\n  MakeTransaction");
}

void ChangeAccountStatus(LinkedList*,char*,int){
    printf("\n\n  ChangeAccountStatus");
}

void GetCash(LinkedList*,double,int){
    printf("\n\n  GetCash");
}
void DepositAccount(LinkedList*,double,int){
    printf("\n\n  DepositAccount");
}
void MainMenu(){
    printf("\n\n  MainMenu");
}



void OpenExistingAccount(LinkedList*,int){
    system("cls");
    printf("\n ********************************************************************************************************************\n");
    printf("\n                                                        Welcome                                                      \n");
    printf("\n ********************************************************************************************************************\n");
    printf("\n  1.  Make Transaction ");
    printf("\n  2.  Change Account Status ");
    printf("\n  3.  Get Cash ");
    printf("\n  4.  Deposit in Account ");
    printf("\n  5.  Return to main menu ");
    printf("\n\n  Please enter your choise :");
    int x;
    scanf("%d",&x);
    if (x==1)
    {
        system("cls");
        printf("\n ********************************************************************************************************************\n");
        printf("\n                                                   Make Transaction                                                  \n");
        printf("\n ********************************************************************************************************************\n\n");
        //MakeTransaction();
    }
    else if (x==2)
    {
        system("cls");
        printf("\n ********************************************************************************************************************\n");
        printf("\n                                                   Change Account Status                                              \n");
        printf("\n ********************************************************************************************************************\n\n");
        //ChangeAccountStatus();
    }
    else if (x==3)
    {
        system("cls");
        printf("\n ********************************************************************************************************************\n");
        printf("\n                                                   Get Cash                                              \n");
        printf("\n ********************************************************************************************************************\n\n");
        //GetCash();
    }
    else if (x==4)
    {
        system("cls");
        printf("\n ********************************************************************************************************************\n");
        printf("\n                                                   Deposit in Account                                              \n");
        printf("\n ********************************************************************************************************************\n\n");
        //DepositAccount();
    }
    else if (x==5)
    {
        system("cls");
        printf("\n ********************************************************************************************************************\n");
        printf("\n                                                   Return to main menu                                              \n");
        printf("\n ********************************************************************************************************************\n\n");
        //MainMenu();
    }
}

void ExitSystem(){
    printf("\n\n  ExitSystem");
}
