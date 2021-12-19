#include<stdio.h>
#include<windows.h>//gotoxy
#include<string.h>
#include<ctype.h>//toupper tolower
#include<stdlib.h>
#include<conio.h>//delay ,getch
char ans=0;
int ok;
int b,valid=0;
int n;
int i;
//function declaration
void WelcomeScreen(void);
void Title(void);
void MainMenu(void);
void LoginScreen(void);
void Add_rec(void);
void func_list(void);
void Search_rec(void);
void Edit_rec(void);
void Dlt_rec(void);
void ex_it(void);
void norec(void);
void gotoxy(short int x, short int y)
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
// ABHISHEK
//list of global variable
struct patient
{

    int age;
    char Gender;
    char First_Name[20];
    char Last_Name[20];
    char Contact_no[15];
    char Address[30];
    char Email[30];
    char Doctor[20];
    char Problem[20];
};
struct patient *p, temp_c;
void drawing()
{
	gotoxy(75,13);
	printf("SYMBOL OF NEW LIFE");
    gotoxy(81,15);
    printf("___");
     gotoxy(82,15);
    printf("___");
   	gotoxy(85,16);
    printf("|");
    gotoxy(85,17);
    printf("|");
    gotoxy(85,18);
    printf("|");
    gotoxy(85,19);
    printf("|");
    gotoxy(86,19);
   printf("_____");
   // gotoxy(86,29);
 //  printf("__________");
  // gotoxy(86,30);
  // printf("_______");
   // gotoxy(88,29);
    //printf("__");
    // gotoxy(90,31);
    // printf("|");
   
    // gotoxy(80,15);
    // printf("|");
    //left verti
    gotoxy(80,16);
    printf("|");
    gotoxy(80,17);
    printf("|");
    gotoxy(80,18);
    printf("|");
    gotoxy(80,19);
    printf("|");
    //left hori
    gotoxy(75,19);
    printf("_____");
    gotoxy(75,20);
    printf("|");
    gotoxy(75,21);
    printf("|");
    gotoxy(76,21);
    printf("_____");
    gotoxy(80,22);
    printf("|");
    gotoxy(80,23);
    printf("|");
    gotoxy(80,24);
    printf("|");
    gotoxy(80,25);
    printf("|");
    gotoxy(81,25);
    printf("_____");
    gotoxy(85,25);
    printf("|");
    gotoxy(85,24);
    printf("|");
    gotoxy(85,23);
    printf("|");
      gotoxy(85,22);
    printf("|");
    gotoxy(86,21);
    printf("_____");
    gotoxy(91,21);
    printf("|");
    gotoxy(91,20);
    printf("|");
}

int main()
{
    drawing();
    gotoxy(0,6);
   // system("color A4");
    WelcomeScreen();
   // system("color A4");
    Title();
  //  system("color A4");
    LoginScreen();
}
//welcome/ 
void WelcomeScreen(void)
{
    system("color 4");
   printf("\033[1;34m");
    printf("\n\t\t\t###############################################");
    printf("\n\t\t\t\t\t    WELCOME TO\t\t");
    printf("\n\t\t\t\t        NEW LIFE HOSPITAL\t\t");
    printf("\n\t\t\t###############################################");
    // system("color 4");
    printf("\033[0m");
    printf("\033[1;33m");
    printf("\n\n\n\n\n\n Press any key to proceed.......");
    printf("\033[0m");
    getch();
    system("cls");
}
/* Title screen*/
void Title(void)
{
    printf("\033[0;33m");
    printf("\n\n\t\t-----------------------------------------------------------");
    printf("\n\t\t\t       NEW LIFE HOSPITAL       ");
    printf("\n\n\t\t-----------------------------------------------------------");
   
}
/*  Main Menu*/
void MainMenu(void)
{

    system("cls");
    int choose;
     
    Title();
    printf("\n\t\t\t\t1.Add Patient Record\n");
    printf("\n\t\t\t\t2.List Patient Record\n");
    printf("\n\t\t\t\t3.Search Patient Record\n");
    printf("\n\t\t\t\t4.Edit Patient Record\n");
    printf("\n\t\t\t\t5.Delete Patient Record\n");
    printf("\n\t\t\t\t6.nubmer of rec\n");
    printf("\n\t\t\t\t7.Exit Patient Record\n");
    printf("\n\n\t\t\t\t\t\tChoose from 1to 7:\n");
    scanf("%i", &choose);
    switch (choose)
    {
    case 1:
        Add_rec();
        break;
    case 2:
        func_list();
        break;
    case 3:
        Search_rec();
        break;
    case 4:
        Edit_rec();
        break;
    case 5:
        Dlt_rec();
        break;
    case 6:
        norec();
        break;
    case 7:
        ex_it();
        break;
    default:
        printf("\t\tOhh!!Invalid Entry Please do valid entry");
        getch();
    }
}
/* Exit Screen*/
void ex_it(void)
{
    system("cls");
    Title();
    printf("\033[0;32m");
    printf("\n\n\n################THANK YOU FOR VISITING##############");
    printf("\n\n\n###############TAKE CARE####################");
    printf("\033[0m");
    getch();
}
//login screen/
void LoginScreen(void)
{
    //list of variablr
    int e = 0;
    char Username[15];
    char Password[15];
    char original_Username[25] = "newlife";
    char original_Password[25] = "582750";
    do
    {
        printf("\033[0;36m");
        printf("\n\n\n\n\n\t\t\t\t\tEnter your Username and Password :");
        printf("\n\n\t\t\t\t\tUsername :");
        scanf("%s", Username);
        printf("\n\n\t\t\t\t\tPASSWORD :");
        scanf("%s", Password);
        if (strcmp(Username, original_Username) == 0 && strcmp(Password, original_Password) == 0)
        {
            printf("\n\n\t\t\t...");
            Sleep(500);  
            printf("L  ");    
            Sleep(500);
             printf("O  ");
              Sleep(500);
             printf("A  ");
              Sleep(500);
              printf("D  ");
              Sleep(500);
               printf("I  ");
              Sleep(500);
               printf("N  ");
              Sleep(500);
               printf("G  ");
              Sleep(500);
              printf(">>>");
              Sleep(500);
            printf("\n\n\n\t\t\t...Login Successfull....");
            getch();
            MainMenu();
            break;
        }
        else
        {
            printf("\n\n\t\t\t...");
            Sleep(500);  
            printf("L  ");    
            Sleep(500);
             printf("O  ");
              Sleep(500);
              printf("A  ");
              Sleep(500);
              printf("D  ");
              Sleep(500);
               printf("I  ");
              Sleep(500);
               printf("N  ");
              Sleep(500);
               printf("G  ");
              Sleep(500);
              printf(">>>");
              Sleep(500);
            printf("\n\t\tPassword is incorrect :(Try Again :)");
            e++;
            getch();
        printf("\033[0m");
        }
    } while (e <= 2);
    if (e > 2)
    {
        printf("You have crossed the limit.You can't login. :(:(");
        getch();
        ex_it();
    }
    system("cls");
}
/* add record*/
void Add_rec(void)
{
    printf("\033[0;35m");

    system("cls");
    Title();
printf("\n\n\t\t\t...");
            Sleep(400);  
            printf("W ");    
            Sleep(400);
             printf("E  ");
              Sleep(400);
              printf("L  ");
              Sleep(400);
               printf("C  ");
              Sleep(400);
               printf("O  ");
              Sleep(400);
               printf("M  ");
              Sleep(400);              
               printf("E ");
               Sleep(400);
              printf(">>>");
              Sleep(400);
              system("cls");
              Title();

    //list of variable
    char ans;
    FILE *ek; //file pointer

    
    printf("\n\n\n How many patient you want to add: ");
    scanf("%d", &n);
    p = (struct patient*)calloc(n, sizeof(struct patient));
    ek = fopen("Record2.txt", "a");//to open file in write mode append

    printf("\n\n\n\n\t\t\t!!!!!!!!!ADD PATIENT RECORD!!!!!!!!!!!!!\n");
//First Name
A:
    //NEW ABHISHEK
    for (i = 0; i < n; ++i)

    {

        printf("\n\t\t\tFirst Name: ");
        scanf("%s", p[i].First_Name);
        p[i].First_Name[0] = toupper(p[i].First_Name[0]);
        if ((strlen(p[i].First_Name) > 20) || (strlen(p[i].First_Name) < 2))
        {
            printf("\n\t:(\tThe max range for first name is 20 and min range is 2 ");
            goto A;
        }
        else
        {
            for (b = 0; b < strlen(p[i].First_Name); b++)
            {
                if (isalpha(p[i].First_Name[b]))
                {
                    valid = 1;
                }
                else
                {
                    valid = 0;
                    break;
                }
            }
            if (!valid)
            {
                printf("\n\t\t\t First Name contains invalid character :( Try Again :)");
                goto A;
            }
        }
    /* *   Last name * ** */
    B:
        printf("\n\t\t\t Last Name:");
        scanf("%s", p[i].Last_Name);
        p[i].Last_Name[0] = toupper(p[i].Last_Name[0]);
        if ((strlen(p[i].Last_Name) > 20) || (strlen(p[i].Last_Name) < 2))
        {
            printf("\n\tInvalid:(\tThe max range for Last name is 20 and min range is 2 ");
            goto B;
        }
        else
        {
            for (b = 0; b < strlen(p[i].Last_Name); b++)
            {
                if (isalpha(p[i].Last_Name[b]))
                {
                    valid = 1;
                }
                else
                {
                    valid = 0;
                    break;
                }
            }
            if (!valid)
            {
                printf("\n\t\t\t Last Name contains invalid character :( Try Again :)");
                goto B;
            }
        }
        /* Gender ** */
        do
        {
            printf("\n\t\t\tGender[M/F]");
            scanf(" %c", &p[i].Gender);
            if ((toupper(p[i].Gender) == 'M') || (toupper(p[i].Gender) == 'F'))
            {
                ok = 1;
            }
            else
            {
                ok = 0;
            }
            if (!ok)
            {
                printf("Gender contains invalid character :( ENter either 'F' or 'M'");
            }
        } while (!ok);
        /* Age **/
        printf("\n\t\t\t\tAge:");
        scanf(" %i", &p[i].age);
        /* Address **/
        do
        {
        C:
            printf("\n\t\t\tAddress:");
            scanf("%s", p[i].Address);
            p[i].Address[0] = toupper(p[i].Address[0]);
            if (strlen(p[i].Address) > 20 || strlen(p[i].Address) < 4)
            {
                printf("\n\tInvalid Address :(Max range for address is 20 and min range is 4");
                goto C;
            }
        } while (!valid);
        /* Contact nuumber */
        do
        {
        D:
            printf("\n\t\t\tContactNumber:");
            scanf("%s", p[i].Contact_no);
            if (strlen(p[i].Contact_no) > 10 || strlen(p[i].Contact_no) != 10)
            {
                printf("\n\t Invalid Contact Number :( It should have 10 numbers! Try Again :)");
                goto D;
            }
            else
            {
                for (b = 0; b < strlen(p[i].Contact_no); b++)
                {
                    if (!isalpha(p[i].Contact_no[b]))
                    {
                        valid = 1;
                    }
                    else
                    {
                        valid = 0;
                        break;
                    }
                }
                if (!valid)
                {
                    printf("\n\t\t\tContact Number contains invalid character:( Try again :)");
                    goto D;
                }
            }
        } while (!valid);
        /* * Email id * */
        do
        {
            printf("\n\t\t\tEnter email:");
            scanf("%s", p[i].Email);
            int len=strlen(p[i].Email);
              if (strlen(p[i].Email)> 30 || strlen(p[i].Email)< 10 ){
                    if(*p[len-10].Email!=64 || *p[len-4].Email!=46 )
            {
                printf("\n\t1. Invalid Email:(The max range for mail is 30and min is 8");
                printf("\n\t2.Check whether you have inputes like '@',and '.' correctly");
            }
              }

        } while (strlen(p[i].Email) > 30 || strlen(p[i].Email) < 10 );
    /*  * Problem ** */
    E:
        printf("\n\t\tProblem:");
        scanf("%s", p[i].Problem);
        p[i].Problem[0] = toupper(p[i].Problem[0]);
        if (strlen(p[i].Problem) > 15 || strlen(p[i].Problem) < 3)
        {
            printf("\n\tInvalid:( The max range for writing a problem is 15 and min is 3");
            goto E;
        }
        else
        {
            for (b = 0; b < strlen(p[i].Problem); b++)
            {
                if (isalpha(p[i].Problem[b]))  
                {
                    valid = 1;
                }

                else
                {
                    valid = 0;
                    break;
                }
            }
            if (!valid)
            {
                printf("\n\t Problem contain invalid character :( Try again:)");
                goto E;
            }
        }

    /* prescribed doctor* */
    F:
        printf("\n\t\tprescribed doctor: ");
        scanf("%s", p[i].Doctor);
        p[i].Doctor[0] = toupper(p[i].Doctor[0]);
        if (strlen(p[i].Doctor) > 30 || strlen(p[i].Doctor) < 3)
        {
            printf("\n\tINVALID:(\t the maximum range for the name is 30 and the minimum is 3)");
            goto F;
        }
        else
        {
            for (b = 0; b < strlen(p[i].Doctor); ++b)
            {
                if (isalpha(p[i].Doctor[b]))
                {
                    valid = 1;
                }
                else
                {
                    valid = 0;
                    break;
                }
            }
            if (!valid)
            {
                printf("\n\t\t Doctor name contains Invalid character: (Enter again please: )");
                goto F;
            }
        }
        fwrite(&p[i],sizeof(struct patient),1,ek);
    }
    // fprintf(ek, "%s %s %c %i %s %s %s %s %s\n", p[i].First_Name, p[i].Last_Name, p[i].Gender, p[i].age, p[i].Address, p[i].Contact_no, p[i].Email, p[i].Problem, p[i].Doctor);
  fclose(ek);
    printf("\n\n\t\t\t ....Information Record Successfully.....");
  //  fclose(ek);
sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more(Y/N): ");
    scanf(" %c", &ans);
    if (toupper(ans) == 'Y')
    {
        Add_rec();
    }
    else if (toupper(ans) == 'N')
    {
        printf("\n\t\t THANK YOU:) :)");
        printf("\n\n\t\t...");
            Sleep(300);  
            printf("G ");    
            Sleep(300);
             printf("E  ");
              Sleep(300);
              printf("T  ");
              Sleep(300);
               printf("W  ");
              Sleep(300);
               printf("E  ");
              Sleep(300);
               printf("L  ");
              Sleep(300);   
              printf("L  ");
              Sleep(300);           
               printf("S ");
               Sleep(300);
               printf("O  ");
               Sleep(300);
               printf("O ");
               Sleep(300);
               printf("N  ");
               Sleep(300);
              printf(">>>");
            //   Sleep(400);
        getch();
        MainMenu();
    }
    else
    {
        printf("\n\t\tInvalid Input:):)");
        goto sd;
    }

    
}

/* VIEW RECODRS* */
void func_list(void)
{
   

    int row;
    system("cls");
    Title();
    FILE *ek;
    ek = fopen("Record2.txt", "r");// oen txt file only in read mode
    printf("\n\n\t\t!!!!!!!!!!!!!!!!!!!List Patients Record!!!!!!!!!!!!!!\n");
    gotoxy(1, 15);
    printf("Full name");
    gotoxy(20, 15);
    printf("Gender");
    gotoxy(32, 15);
    printf("Age");
    gotoxy(37, 15);
    printf("Address");
    gotoxy(49, 15);
    printf("Contact .NO");
    gotoxy(64, 15);
    printf("Email");
    gotoxy(88, 15);
    printf("Problem");
    gotoxy(98, 15);
    printf("Prescribed Doctor\n");
    printf("##########################################################################################################################");
   //ABHISHEK
   struct patient p1;
   
   ek=fopen("Record2.txt","r");

    row = 17;

  //  while (fscanf(ek, "%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor) != EOF);
       while(fread(&p1,sizeof(struct patient),1,ek)) //to read array element from file
    {
        gotoxy(1, row);
        printf("%s %s", p1.First_Name, p1.Last_Name);
        gotoxy(20, row);
        printf("%c", p1.Gender);
        gotoxy(32, row);
        printf("%i", p1.age);
        gotoxy(37, row);
        printf("%s", p1.Address);
        gotoxy(49, row);
        printf("%s", p1.Contact_no);
        gotoxy(64, row);
        printf("%s", p1.Email);
        gotoxy(88, row);
        printf("%s", p1.Problem);
        gotoxy(98, row);
        printf("%s", p1.Doctor);
        row++;
    }
    fclose(ek);
    printf("\n\n\t\t\t...");
            Sleep(300);  
            printf("T  ");    
            Sleep(300);
             printf("H  ");
              Sleep(300);
              printf("A  ");
              Sleep(300);
               printf("N  ");
              Sleep(300);
               printf("K  ");
              Sleep(300);
               printf("Y  ");
              Sleep(300);
              printf("O  ");
              Sleep(300);
              printf("U  ");
              Sleep(300);
              printf(">>>");
              Sleep(300);
    getch();
    MainMenu();
}
void Search_rec(void)
{
     printf("\033[0;34m");
    char name[20];
    system("cls");
    Title();
    struct patient p1;
    FILE *ek;
    ek = fopen("Record2.txt", "r");
    printf("\n\n\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!Search Patient Record!!!!!!!!!!!!!!!!!!!!!!!\n");
    gotoxy(12, 8);
    printf("Entered patient Name to be viewed: ");
    scanf("%s", name);
    fflush(stdin);//to avoid buffer
    name[0] = toupper(name[0]);
    //while (fscanf(ek, "%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor) != EOF)
     while(fread(&p1,sizeof(struct patient),1,ek))
    {
        if (strcmp(p1.First_Name, name) == 0)
        {
            gotoxy(1, 15);
            printf("Full name");
            gotoxy(15, 15);
            printf("Gender");
            gotoxy(32, 15);
            printf("Age");
            gotoxy(37, 15);
            printf("Address");
            gotoxy(52, 15);
            printf("Contact No.");
            gotoxy(64, 15);
            printf("Email");
            gotoxy(80, 15);
            printf("Problem");
            gotoxy(95, 15);
            printf("Priscribed Doctor\n");
            printf("###############################################################################################");
            gotoxy(1, 18);
            printf("%s %s", p1.First_Name, p1.Last_Name);
            gotoxy(25, 18);
            printf("%c", p1.Gender);
            gotoxy(32, 18);
            printf("%i", p1.age);
            gotoxy(37, 18);
            printf("%s", p1.Address);
            gotoxy(52, 18);
            printf("%s", p1.Contact_no);
            gotoxy(64, 18);
            printf("%s", p1.Email);
            gotoxy(80, 18);
            printf("%s", p1.Problem);
            gotoxy(95, 18);
            printf("%s", p1.Doctor);
            printf("\n");
            break;
        }
    }
    if (strcmp(p1.First_Name, name) != 0)
    {
        gotoxy(5, 10);
        printf("Record not found!");
        getch();
    }
    fclose(ek);
L:
    getch();
    printf("\n\n\t\t\tDo you want to view more [Y/N]??");
    scanf("%c", &ans);
    if (toupper(ans) == 'Y')
    {
        Search_rec();
    }
    else if (toupper(ans) == 'N')
    {
        printf("\n\t\t Thank you :) :)");
        getch();
        MainMenu();
    }
    else
        ("\n\t Invalid Input.\n");
    {
        goto L;
    }
     printf("\033[0m");
}
void Edit_rec(void)
{
    struct patient p1;
    FILE *ek, *ft;
    int i, b, valid = 0;
    char ch;
    char name[20];
    system("cls");
    Title();
    ft = fopen("sarvesh.txt", "w");
    ek = fopen("Record2.txt", "r");
    if (ek == NULL)
    {
        printf("\n\t Cannot open file!!");
        getch();
        MainMenu();
    }
    printf("\n\n\t\t\t!!!!!!!!!!!!!!Edit Patients Record!!!!!!!!!!!!!!!\n");
    gotoxy(12, 13);
    printf("Enter the first Name of Patient:");
    scanf(" %s", name);
    fflush(stdin);
    name[0] = toupper(name[0]);
    gotoxy(12, 15);
    if (ft == NULL)
    {
        printf("\n\t Cannot open file!!");
        getch();
        MainMenu();
    }
   // while (fscanf(ek, "%s %s %c %i %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Email, p.Doctor, p.Problem) != EOF)
    while(fread(&p1,sizeof(struct patient),1,ek))
    {
        if (strcmp(p1.First_Name, name) == 0)
        {
            valid = 1;
            gotoxy(25, 17);
            printf("Existing Record");
            gotoxy(10, 19);
            printf("%s \t%s \t%c \t%i \t%s \t%s \t%s \t%s \t%s\n", p1.First_Name, p1.Last_Name, p1.Gender, p1.age, p1.Address,p1.Contact_no, p1.Email, p1.Doctor, p1.Problem);
            gotoxy(12, 22); 
            printf("Enter New First Name:");
            scanf("%s", p1.First_Name);
            gotoxy(12, 24);
            printf("Enter Last Name:");
            scanf("%s", p1.Last_Name);
            gotoxy(12, 26);
            fflush(stdin);
            printf("Enter Gender:");
            scanf(" %c",&p1.Gender);
            p1.Gender = toupper(p1.Gender);
            gotoxy(12, 28);
            printf("Enter age:");
            scanf("%d",&p1.age);
            gotoxy(12, 30);
            printf("Enter Address:");
            scanf("%s", p1.Address);
            p1.Address[0] = toupper(p1.Address[0]);
            gotoxy(12, 32);
            printf("Enter Contact no:");
            scanf("%s", p1.Contact_no);
            gotoxy(12, 34);
            printf("Enter New Email:");
            scanf("%s", p1.Email);
            gotoxy(12, 36);
            printf("Enter Problem:");
            scanf("%s", p1.Problem);
            p1.Problem[0] = toupper(p1.Problem[0]);
            gotoxy(12, 38);
            printf("Enter Doctor:");
            scanf("%s", p1.Doctor);
            p1.Doctor[0] = toupper(p1.Doctor[0]);
            //ABHISHEK
            // fwrite(&p1,sizeof(struct patient),1,ft);

            printf("\nPress U caharacter for the updating Operation :");
            ch = getch();
             if (ch == 'u' || ch == 'U')
            {
            //     fprintf(ft, "%s %s %c %i %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Email, p.Doctor, p.Problem);
                printf("\n\n\t\t\t Patient Record updated Succesfully!!!");
           }
        }
        // else
        // {
        //     fprintf(ft, "%s %s %c %i %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Email, p.Doctor, p.Problem);
        // }
        fwrite(&p1,sizeof(struct patient),1,ft);
    }
    fclose(ft);
    fclose(ek);
    if (!valid)
    {
        printf("\n\t\tNO RECORD FOUND...");
    }
    if(valid)
    { 
        ek=fopen("Record2.txt","w");
       ft=fopen("sarvesh.txt","r");

        while(fread(&p1,sizeof(struct patient),1,ft))
        {
            fwrite(&p1,sizeof(struct patient),1,ek);
        }
        fclose(ek);
        fclose(ft);
    }
    // fclose(ft);
    // fclose(ek);
    // remove("Record2.txt");
    // rename("temp2.txt", "Record2.txt");
    getch();
    MainMenu();
}
void Dlt_rec()
{
    char name[20];
    int found = 0;
    system("cls");
    Title();
    struct patient p1;
    FILE *ek, *ft;
    ft = fopen("temp_file2.txt", "w");
    ek = fopen("Record2.txt", "r");
    printf("\033[1;35m");
    printf("\n\n\t\t\t!!!!!!!!!!!!!!Delete Patients Record!!!!!!!!!!!!!!!\n");
    gotoxy(12, 8);
    printf("\n Enter patient Name to delete:");
    fflush(stdin);
    gets(name);
    name[0] = toupper(name[0]);
    // while (fscanf(ek, "%s %s %c %i %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Email, p.Doctor, p.Problem) != EOF)
     while(fread(&p1,sizeof(struct patient),1,ek))
    {
        // if (strcmp(p.First_Name, name) != 0)
        //     fprintf(ft, "%s %s %c %i %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Email, p.Doctor, p.Problem);
        // else
        // {
        //     printf("%s %s %c %i %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Email, p.Doctor, p.Problem);
        //     found = 1;
        // }
        if(strcmp(p1.First_Name,name)==0)
        {

            found=1;

        }
        else{
    fwrite(&p1,sizeof(struct patient),1,ft);
        }
    }
    fclose(ek);
    fclose(ft);
    if (found)
    {
        // printf("\n\n\t\t\t Record not found...");
        // getch();
        // MainMenu();
        ek=fopen("Record2.txt","w");
        ft=fopen("temp_file2.txt","r");

        while(fread(&p1,sizeof(struct patient),1,ft))
        {
            fwrite(&p1,sizeof(struct patient),1,ek);
        }
         printf("\n\n\t\t Record Deleted Successfully!!!");
          printf("\n\n\t\t...");
            Sleep(300);  
            printf("T ");    
            Sleep(300);
             printf("A  ");
              Sleep(300);
              printf("K  ");
              Sleep(300);
               printf("E  ");
              Sleep(300);
               printf("  C  ");
              Sleep(300);
               printf("A  ");
              Sleep(300);   
              printf("R  ");
              Sleep(300);           
               printf("E ");
            //    Sleep(300);
            //    printf("I  ");
            //    Sleep(300);
            //    printf("N ");
               
               Sleep(300);
              printf(">>>");
        fclose(ek);
        fclose(ft);
        printf("\033[0m");
         getch();
        MainMenu();
    }
    else
    {
        printf("\n\n\t\t\t Record not found...");
        // fclose(ek);
        // fclose(ft);
        // remove("Record2.txt");
        // rename("temp2.txt", "Record2.txt");
        // printf("\n\n\t\t Record Deleted Successfully!!!");
        getch();
        MainMenu();
    }
}
void norec()

{  

    struct patient s1;
    FILE*ek;
    ek=fopen("Record2.txt","r");
    fseek(ek,0,SEEK_END);
    int rec=ftell(ek)/sizeof(struct patient);
    printf("\033[1;32m");

    printf("\n\n\n\n\n The total number of record is:  %d",rec);
    fclose(ek);
    printf("\033[0m");
    getch();
    MainMenu();
    
}
