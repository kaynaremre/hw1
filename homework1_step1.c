#include <stdio.h>

void secret()
{
    printf("now inside secret()!\n");
}

void entrance()
{
	int doNotTouch[4];
    // can only modify this section BEGIN
    // cant call secret(), maybe use secret (pointer to function)
    //void* osas = main;
    //doNotTouch[10] = (long long)osas + 33;
    
    doNotTouch[4] = (long long)secret + 15;
    void* osas = secret;
    doNotTouch[6] = (long long)osas;

    // can only modify this section END
    printf("now inside entrance()!\n");
}

int main (int argc, char *argv[])
{
    entrance();
    return 0;
}
