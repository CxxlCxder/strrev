#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
    char *end, *wrk = str;
    {
        if(str && *str)
        {
            end = str + strlen(str) - 1;
            while(end > wrk)
            {
                char temp;

                temp = *wrk;
                *wrk++ = *end;
                *end-- = temp;
            }
        }
    }
    return str;
}