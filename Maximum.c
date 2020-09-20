#include <stdio.h>

int main()
{

        int size, i, largest;
        scanf("%d", &size);
        int array[size];
        for (i = 0; i < size; i++)
        {
            scanf("%d", &array[i]);
        }

        largest = array[0];

        for (i = 1; i < size; i++)
        {
            if (largest < array[i])
            largest = array[i];
        }

        printf("%d", largest);

        return 0;
}
