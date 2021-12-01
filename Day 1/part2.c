#include <stdio.h>

int main(void)
{
    int counter = 0, depth0, depth1, depth2, sum0, sum1;
    scanf("%d %d %d", &depth0, &depth1, &depth2);
    sum0 = depth0 + depth1 + depth2;
    depth0 = depth1;
    depth1 = depth2;
    while (scanf("%d", &depth2) != EOF)
    {
        sum1 = depth0 + depth1 + depth2;
        if (sum0 < sum1)
        {
            counter++;
        }
        depth0 = depth1;
        depth1 = depth2;
        sum0 = sum1;
    }
    
    printf("%d", counter);
}
