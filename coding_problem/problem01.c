/*
    Sat sep 11
    en-us
    Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
    For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
    Bonus: Can you do this in one pass?

    pt-br
    Dada uma lista de números e um número k, retorne se quaisquer dois números da lista somam k.
    Por exemplo, dados [10, 15, 3, 7] e k de 17, retorna verdadeiro, pois 10 + 7 é 17.
    Bônus: você pode fazer isso em uma passagem?
*/

#include <stdio.h>

int check(int *list, int k, int quantity_list)
{
    for (int i = 0; i < quantity_list; i++)
    {
        for (int j = 0; j < quantity_list; j++)
        {
            if (list[i] + list[j] == k)
            {
                printf("(%d + %d) == %d", list[i], list[j], k);
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    // declarations
    int k;
    int quantity_list = 10;
    int list[quantity_list];
    int controll = 1;

    // build list
    for (int i = 0; i < quantity_list; i++)
    {
        list[i] = i + 1;
    }

    // show list in display
    printf("\n List:");
    printf("[ ");
    for (int i = 0; i < quantity_list; i++)
    {
        if (i == quantity_list - 1)
        {
            printf("%d", list[i]);
        }
        else
        {

            printf("%d, ", list[i]);
        }
    }
    printf(" ]");

    while (controll)
    {   
        printf("\n");
        printf("\nCHOSSE A OPTION: ");
        printf("\n1 to continue ");
        printf("\n0 to quit ");
        printf("\n");

        scanf("\n%d", &controll);
        if (!controll)
        {
            return 0;
        }
        else
        {
            // read k
            printf("\ntype a number: ");
            scanf("%d", &k);

            // processing
            int response = check(list, k, quantity_list);

            if (response)
            {
                printf("\nTRUE");
            }
            else
            {
                printf("\nFALSE");
            }
        }
    }
    return 0;
}
