/*
    Project: County Library management system.
    Author:  Titus Njiru
    Date:    Oct,2021
    Compiler: GNU GCC
    Language: C99
    License: MIT
*/

/*

Users - view users,Add new user, edit,delete,login,change password,logout
catalogue
Issuance
Serial
Acquisition

Navigation

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu(); // prototype
int main()
{
    int action;
    action = menu();
    // execute action
    return 0;
}

int menu() //header
{
    int action;
    do {
        printf("\tCounty Library\n");
        printf("Welcome Mr. Titus. \n");
        printf("What would you like to do?\n");
        printf("1. View Users.\n");
        printf("2. Add new User\n");
        printf("3. Edit User.\n");
        printf("4. Delete User.\n");
        printf("5. Change Password.");
        printf("6. Logout.\n");
        printf("7. Exit.\n");
        printf("Selected action(1-7): ");
        scanf("%d",&action);
        if(action < 1 || action > 7) {
            system("cls");
            printf("Invalid Action. Try again.\n");
        }
    } while (action < 1 || action > 7);

    return action;
}
