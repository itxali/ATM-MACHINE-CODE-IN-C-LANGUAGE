#include <stdio.h>

void Main_Menu_1();
void Check_Balance_1();
void Withdraw_Cash_1();
void Deposit_Cash_1();
void Quit_1();

void Main_Menu_2();
void Check_Balance_2();
void Withdraw_Cash_2();
void Deposit_Cash_2();
void Quit_2();

int choice, pin, k;
char transaction = 'y';
float withd = 0, depo = 0, bal_1 = 100000, bal_2 = 150000;

int main()

{
    while (pin != 1520 || pin != 1530)
    {
        printf("ENTER YOUR SECRET PIN NUMBER:");
        scanf("%d", &pin);

        if (pin == 1520)
            Main_Menu_1();
            
        else if (pin == 1530)
            Main_Menu_2();

        
        printf("PLEASE ENTER VALID PASSWORD\n");
    }
    return 0;
}

void Main_Menu_1()
{
    printf("\n********Profile ALI***********\n");
    do
    {
        printf("\n********Welcome to UETM Bank ATM Service***********\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
        printf("********************************************\n\n");
        printf("\nEnter your choice:\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Check_Balance_1();
            break;
        case 2:
            Withdraw_Cash_1();
            break;
        case 3:
            Deposit_Cash_1();
            break;
        case 4:
            Quit_1();
            break;
        default:
            break;
        }
        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
            k = 1;
    } while (!k);
    printf("\n\n THANKS FOR USING ALI Bank ATM SERVICE");
}
void Check_Balance_1()
{
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is: Rs.%.2f\n\n", bal_1);
}
void Withdraw_Cash_1()
{
    printf("\n **************WITHDRAW MENU****************\n");
    printf("\nYour current ballance is :Rs. % .2f", bal_1);
    printf("\nPlease enter withdraw amount:");
    scanf(" %f", &withd);
    if (withd != 0)
    {
        bal_1 = bal_1 - withd;
        printf("\nYou have withdrawn is : Rs. % .2f \nYour curent ballance is : Rs. % d", withd, bal_1);
    }
    else
    {
        printf("\nError: you have insuficient");
    }
}
void Deposit_Cash_1()
{
    printf("\n *********DEPOSIT MENU***********\n");
    printf("\nPlease enter deposit amount:");
    scanf(" %f", &depo);
    if (depo > 0)
    {
        bal_1 = bal_1 + depo;
        printf("\nYour new acount balance is : Rs. % .2f\n", bal_1);
    }
    else
    {
        printf("\nERROR : you can not deposit less than 0");
    }
}
void Quit_1()
{
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");
    printf("---------------------20mdele109---------------------\n");
}

void Main_Menu_2()
{
    printf("\n********Profile AHMAD***********\n");
    do
    {
        printf("\n********Welcome to XYZ Bank ATM Service***********\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
        printf("********************************************\n\n");
        printf("\nEnter your choice:\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Check_Balance_2();
            break;
        case 2:
            Withdraw_Cash_2();
            break;
        case 3:
            Deposit_Cash_2();
            break;
        case 4:
            Quit_2();
            break;
        default:
            break;
        }
        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
            k = 1;
    } while (!k);
    printf("\n\n THANKS FOR USING ALI Bank ATM SERVICE");
}
void Check_Balance_2()
{
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is: Rs.%.2f\n\n", bal_2);
}
void Withdraw_Cash_2()
{
    printf("\n **************WITHDRAW MENU****************\n");
    printf("\nYour current ballance is: Rs. % .2f", bal_2);
    printf("\nPlease enter withdraw amount:");
    scanf(" %f", &withd);
    if (withd != 0)
    {
        bal_2 = bal_2 - withd;
        printf("\nYou have withdrawn : Rs. % .2f \nYour curent ballance is: Rs. % d", withd, bal_2);
    }
    else
    {
        printf("\nError: you have insuficient");
    }
}
void Deposit_Cash_2()
{
    printf("\n *********DEPOSIT MENU***********\n");
    printf("\nPlease enter deposit amount:");
    scanf(" %f", &depo);
    if (depo > 0)
    {
        bal_2 = bal_2 + depo;
        printf("\nyYour new acount balance is :Rs. % .2f\n\npress any key to continue: Rs.", bal_2);
    }
    else
    {
        printf("\nERROR : you can not deposit less than 0");
    }
}
void Quit_2()
{
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");
    printf("---------------------20mdele109---------------------\n");
}