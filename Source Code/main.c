#include "functions.h"

int main()
{
    // Print logo
    Logo();

    // Get number of students
    strcntr("Enter students number:", 100);
    printf("\n");
    scanf("%d", &size);
    do
    {
        Logo();
        MainChoice();

        // Run functions depending on choice
        if (choice == 1)
        {
            FirstChoice();
        }

        else if (scan == 0)
        {
            printf("You must add students at first!!\n");
        }

        else if (scan != 0)
        {
            if (choice == 2)
            {
                SecondChoice();
            }

            if (choice == 3)
            {
                ThirdChoice();
            }
        }

    } while (choice != 4);

    return 0;
}
