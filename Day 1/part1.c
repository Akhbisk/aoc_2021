#include <stdio.h>

int main(void)
{
    int counter = 0, depth0, depth1;
    scanf("%d", &depth0);
    while (scanf("%d", &depth1) != EOF)
    {
        if (depth0 < depth1)
        {
            counter++;
        }
        
        depth0 = depth1;
    }
    
    printf("%d", counter);
}
