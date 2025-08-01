#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} people;

int main(void)
{

    people lecture[3];

    lecture[0].name = "David";
    lecture[0].number = "+1-617-495-1000";

    lecture[1].name = "John";
    lecture[1].number = "+1-949-468-2750";

    lecture[2].name = "Yulia";
    lecture[2].number = "+1-617-495-1000";

    string person_name = get_string("Name: ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(lecture[i].name, person_name) == 0)
        {
            printf("Found, %s\n", lecture[i].number);
            return 0;
        }
    }

    printf("Not found! \n");
    return 1;
}