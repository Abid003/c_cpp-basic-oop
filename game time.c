#include <stdio.h>
int main()
{
    int st, et, dt;
    scanf("%d %d", &st, &et);
    dt = et - st;
    if (dt < 0)

    {
        dt = 24 + (et - st);
    }
    if (st == et)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S)\n", dt);
    return 0;
}
