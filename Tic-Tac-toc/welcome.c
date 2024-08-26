#define SPACE "     "

void welcome()
{
    int j = 0;
    char s = -33;
    system("cls");
    printf("\n\n\t\t\t  WELCOME TO TIC-TAC-TOE !\n\n");
    printf("\n\n\t\t\tPress any key to Continue....");
    getch();
    printf("\n\n\t\t\t LETS GET STARTED!..");
    printf("\n\n\t\t\tLOADING...\n\n\t\t\t");

    for (j = 0; j < 3; j++)
    {
        printf("%c%c%c%c%c%c%c%c%c%c", s, s, s, s, s, s, s, s, s, s);
        sleep(1);
    }
}