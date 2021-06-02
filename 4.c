// 2021-06-02 16:15:31

#include <stdio.h>

int pick();

int main()
{
    int i, num, tries = 0;

    char ch;
    i = (i, ++i, 2, 256, 1024, 999) + 1;

    do
    {
        printf("guess the value of i:");
        scanf("%d", &num);
        tries++;

        if (i > num)
        {

            pick();
            i = (i, i++, 3 * i);
        }
        else if (i < num)
        {
            pick();
        }
        else
        {
            if (tries <= 3)
            {

                printf("\nCorrect! Balak you got it in %d attempt(s)!\n", tries);
            }
            else
            {
                printf("\nBahut jaldi aa gaya balak bas %d attempt(s) laga!!\n", tries);
            }
        }

    } while (i != num);
}

int pick()
{
    const char * words[5]; // 1
    int rand(), srand(), time();
    words[0] = "nu-nu h tu";
    words[1] = "aur try keraga!";
    words[2] = "balak tu baccha h";
    words[3] = "balak chor da";
    words[4] = "ek aur try!";
    const char * random; // 2
    srand(time(NULL));
    random = words[rand() % 5]; // 3
    puts(random);               // 4
    return 0;
}
