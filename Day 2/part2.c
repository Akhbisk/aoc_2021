#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int horizontal = 0, depth = 0, aim = 0;
    char s[10];
    while(fgets(s, 10, stdin) != NULL)
    {
        if (s[0] == 'f')
        {
            horizontal += atoi(&s[8]);
            depth += (aim * atoi(&s[8]));
        }
        
        else if (s[0] == 'u')
            aim -= atoi(&s[3]);
            
        else if (s[0] == 'd')
            aim += atoi(&s[5]);
    }
    
    printf("%d", horizontal * depth);
}
