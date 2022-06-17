#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define LEN 15

struct name
{
        char fname[LEN];
        char mname[LEN];
        char lname[LEN];
};

struct person
{
        int socinum;
        struct name human;
};

struct person persons[5] = {
    {302039823, {"Dribble", "Medile", "Flossie"}},
    {302039824, {"John", "Fitzgerald", "Kennedy"}},
    {302039825, {"George", "Walker", "Bush"}},
    {302039826, {"Edware", "Adam", "Davis"}},
    {302038727, {"John", "", "Junior"}}};

void show(const struct person ps);

int main(void)
{
        int i;

        printf("**************************************\n");
        printf("List by origin:\n");
        for(i = 0; i < 5; i++)
                show(persons[i]);

        return 0;
}

void show(const struct person ps)
{
        if(strlen(ps.human.mname) > 0)
                printf("%s, %s %c. - %d\n", ps.human.fname, ps.human.lname, ps.human.mname[0], ps.socinum);
        else
                printf("%s, %s - %d\n", ps.human.fname, ps.human.lname, ps.socinum);
}
