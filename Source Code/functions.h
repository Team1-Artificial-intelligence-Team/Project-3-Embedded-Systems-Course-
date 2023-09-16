#include <stdio.h>
#include <string.h>
#include <conio.h>

// Prototyping
void MainChoice(), FirstChoice(), SecondChoice(), ThirdChoice(),Logo(), strcntr();

// Define students structure
typedef struct students
{
    char name[30];
    int id;
    int age;
} stu;

int scan = 0;
int size;
stu stu_list[100];
int choice, choice_sorting, choice_sorting_by;

void Logo()
{
    printf("   _____   _                 _                  _             _____            _             _                          \n");
    printf("  / ____| | |               | |                | |           |  __ \\          | |           | |                         \n");
    printf(" | (___   | |_   _   _    __| |   ___   _ __   | |_   ___    | |  | |   __ _  | |_    __ _  | |__     __ _   ___    ___ \n");
    printf("  \\___ \\  | __| | | | |  / _` |  / _ \\ | '_ \\  | __| / __|   | |  | |  / _` | | __|  / _` | | '_ \\   / _` | / __|  / _ \\ \n");
    printf("  ____) | | |_  | |_| | | (_| | |  __/ | | | | | |_  \\__ \\   | |__| | | (_| | | |_  | (_| | | |_) | | (_| | \\__ \\ |  __/ \n");
    printf(" |_____/   \\__|  \\__,_|  \\__,_|  \\___| |_| |_|  \\__| |___/   |_____/   \\__,_|  \\__|  \\__,_| |_.__/   \\__,_| |___/  \\___| \n");
    printf(" \n\n@Made by TEAM1 (Fares Mostafa - Hassan Mohamed - Youssef Tamer - Youssef Walid)\n");
}

// String center function
void strcntr(char string[100], int width)
{
    // Get the length of the string.
    int len = strlen(string);

    // Print spaces to the left of the string, up to the center of the width.
    for (int i = 0; i < (width - len) / 2; i++)
    {
        printf("=");
    }

    // If the string is empty, print a space.
    if (strcmp(string, "") != 0)
    {
        printf(" ");
    }
    else if (len % 2 == 0) // If the string length is even, print two equal signs.
    {
        printf("==");
    }
    else // If the string length is odd, print one equal sign.
    {
        printf("=");
    }

    // Print the string.
    for (int i = 0; i <= len; i++)
    {
        printf("%c", string[i]);
    }
    if (strcmp(string, "") != 0)
    {
        printf(" ");
    }

    // Print spaces to the right of the string, up to the center of the width.
    for (int i = 0; i < (width - len) / 2; i++)
    {
        printf("=");
    }
}
int size;

// Main menu
void MainChoice()
{
    strcntr("", 100);
    printf("\n");
    strcntr("1- Add students , 2- Print the list , 3- Sort the students , 4- Exit", 100);
    printf("\n");
    strcntr("", 100);
    printf("\n");
    printf("\n");
    strcntr("Enter your choice:", 100);
    printf("\n");
    scanf("%d", &choice);
    fflush(stdin);

    fflush(stdin);
}

// Scan
void FirstChoice()
{
    for (int i = 0; i < size; i++)
    {
        strcntr("Enter the name:", 100);
        printf("\n");
        gets(stu_list[i].name);
        fflush(stdin);

        strcntr("Enter the ID:", 100);
        printf("\n");
        scanf("%d", &stu_list[i].id);
        fflush(stdin);

        strcntr("Enter the age:", 100);
        printf("\n");
        scanf("%d", &stu_list[i].age);
        printf("\n");
        fflush(stdin);

        printf("---------------------------\n");
    }

    scan = 1;
}

// Print
void SecondChoice()
{
    for (int i = 0; i < size; i++)
    {
        strcntr("Name:", 100);
        printf("\n");
        puts(stu_list[i].name);

        strcntr("ID: ", 100);
        printf("\n");
        printf("%d", stu_list[i].id);
        printf("\n");
        strcntr("Age:", 100);
        printf("\n");
        printf("%d", stu_list[i].age);
        printf("\n");

        printf("===========================\n");
    }
}

// Sorting
void ThirdChoice()
{
    strcntr("1- Ascending , 2- Descending", 100);
    printf("\n");
    strcntr("Choose:", 100);
    printf("\n");
    scanf("%d", &choice_sorting);
    fflush(stdin);

    strcntr("1- Name , 2- Age , 3- ID", 100);
    printf("\n");
    strcntr("Enter your choice:", 100);
    printf("\n");
    scanf("%d", &choice_sorting_by);
    fflush(stdin);

    if (choice_sorting == 1)
    {
        if (choice_sorting_by == 1)
        {
            for (int i = 0; i < size; i++)
            {
                for (int i = 0; i < size - 1; i++)
                {
                    if (strcmp(stu_list[i].name, stu_list[i + 1].name) == 1)
                    {
                        int temp_age, temp_id;
                        char temp[30];

                        temp_age = stu_list[i].age;
                        stu_list[i].age = stu_list[i + 1].age;
                        stu_list[i + 1].age = temp_age;

                        temp_id = stu_list[i].id;
                        stu_list[i].id = stu_list[i + 1].id;
                        stu_list[i + 1].id = temp_id;

                        strcpy(temp, stu_list[i].name);
                        strcpy(stu_list[i].name, stu_list[i + 1].name);
                        strcpy(stu_list[i + 1].name, temp);
                    }
                }
            }
        }

        else if (choice_sorting_by == 2)
        {
            for (int i = 0; i < size; i++)
            {
                for (int i = 0; i < size - 1; i++)
                {
                    if (stu_list[i].age > stu_list[i + 1].age)
                    {
                        int temp_age, temp_id;
                        char temp[30];

                        temp_age = stu_list[i].age;
                        stu_list[i].age = stu_list[i + 1].age;
                        stu_list[i + 1].age = temp_age;

                        temp_id = stu_list[i].id;
                        stu_list[i].id = stu_list[i + 1].id;
                        stu_list[i + 1].id = temp_id;

                        strcpy(temp, stu_list[i].name);
                        strcpy(stu_list[i].name, stu_list[i + 1].name);
                        strcpy(stu_list[i + 1].name, temp);
                    }
                }
            }
        }
        else if (choice_sorting_by == 3)
        {
            for (int i = 0; i < size; i++)
            {
                for (int i = 0; i < size - 1; i++)
                {
                    if (stu_list[i].id > stu_list[i + 1].id)
                    {
                        int temp_age, temp_id;
                        char temp[30];

                        temp_age = stu_list[i].age;
                        stu_list[i].age = stu_list[i + 1].age;
                        stu_list[i + 1].age = temp_age;

                        temp_id = stu_list[i].id;
                        stu_list[i].id = stu_list[i + 1].id;
                        stu_list[i + 1].id = temp_id;

                        strcpy(temp, stu_list[i].name);
                        strcpy(stu_list[i].name, stu_list[i + 1].name);
                        strcpy(stu_list[i + 1].name, temp);
                    }
                }
            }
        }
    }

    if (choice_sorting == 2)
    {
        if (choice_sorting_by == 1)
        {
            for (int i = 0; i < size; i++)
            {
                for (int i = 0; i < size - 1; i++)
                {
                    if (strcmp(stu_list[i].name, stu_list[i + 1].name) == -1)
                    {
                        int temp_age, temp_id;
                        char temp[30];

                        temp_age = stu_list[i].age;
                        stu_list[i].age = stu_list[i + 1].age;
                        stu_list[i + 1].age = temp_age;

                        temp_id = stu_list[i].id;
                        stu_list[i].id = stu_list[i + 1].id;
                        stu_list[i + 1].id = temp_id;

                        strcpy(temp, stu_list[i].name);
                        strcpy(stu_list[i].name, stu_list[i + 1].name);
                        strcpy(stu_list[i + 1].name, temp);
                    }
                }
            }
        }

        else if (choice_sorting_by == 2)
        {
            for (int i = 0; i < size; i++)
            {
                for (int i = 0; i < size - 1; i++)
                {
                    if (stu_list[i].age < stu_list[i + 1].age)
                    {
                        int temp_age, temp_id;
                        char temp[30];

                        temp_age = stu_list[i].age;
                        stu_list[i].age = stu_list[i + 1].age;
                        stu_list[i + 1].age = temp_age;

                        temp_id = stu_list[i].id;
                        stu_list[i].id = stu_list[i + 1].id;
                        stu_list[i + 1].id = temp_id;

                        strcpy(temp, stu_list[i].name);
                        strcpy(stu_list[i].name, stu_list[i + 1].name);
                        strcpy(stu_list[i + 1].name, temp);
                    }
                }
            }
        }
        else if (choice_sorting_by == 3)
        {
            for (int i = 0; i < size - 1; i++)
            {
                for (int i = 0; i < size - 1; i++)
                {
                    if (stu_list[i].id < stu_list[i + 1].id)
                    {
                        int temp_age, temp_id;
                        char temp[30];

                        temp_age = stu_list[i].age;
                        stu_list[i].age = stu_list[i + 1].age;
                        stu_list[i + 1].age = temp_age;

                        temp_id = stu_list[i].id;
                        stu_list[i].id = stu_list[i + 1].id;
                        stu_list[i + 1].id = temp_id;

                        strcpy(temp, stu_list[i].name);
                        strcpy(stu_list[i].name, stu_list[i + 1].name);
                        strcpy(stu_list[i + 1].name, temp);
                    }
                }
            }
        }
    }

    printf("Sort is completed\n");
}
