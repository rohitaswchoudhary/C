#include<stdio.h>

void main()
{
    pick();
    return 0;
}

void pick() {
    const char* words[5]; // 1
    words[0] = "nu-nu h tu";
    words[1] = "aur try keraga!";
    words[2] = "balak tu baccha h";
    words[3] = "balak chor da";
    words[4] = 'accha ek aur try!';
    const char* random; // 2
    srand(time(NULL));
    random = words[rand() % 4]; // 3
    puts(random); // 4
    return 0;
}