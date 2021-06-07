#include <stdio.h>

int main()
{
    int i, num, tries = 0;

    char ch;
    i = (i, ++i, 2, 256, 1024, 998) + 1;

    do
    {
        printf("guess the value of i:");
        scanf("%d", &num);
        tries++;

        if (i > num)
        {

            pick();
            i++;
        }
        else if (i < num)
        {
            pick();
            i++;
        }
        else
        {
            if (tries < 3)
            {

                printf("\nCorrect! Balak you got it in %d attempt(s)!\n", tries);
            }
            else
            {
                printf("\nBahut jaldi aa gaya balak bas %d attempt(s) laga!!\n", tries);
            }
        }

    } while (i != num);

    return 0;
}

void pick()
{
    const char *words[5]; // 1
    int rand(), srand(), time();
    words[0] = "nu-nu h tu";
    words[1] = "aur try keraga!";
    words[2] = "balak tu baccha h";
    words[3] = "balak chor da";
    words[4] = 'accha ek aur try!';
    const char *random; // 2
    srand(time(NULL));
    random = words[rand() % 4]; // 3
    puts(random);               // 4
}
