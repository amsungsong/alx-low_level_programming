void print_to_98(int n)
{
         int i;
        if (n < 98)
        {
                i = 0;
                while( i ≤ 98 && i ≤ n)
                {
                        printf(“%d”, i);
                        if (i != 98 && i != n)
                                printf(“, ”);
                        i++;
                 }
        }
        else
        {
                i = n;
                while ( i ≥ 98)
                {
                        printf(“%d”, i);
                        if (i ≠ 98)
                                printf(“, “);
                         i—;
                 }
        }
        printf("\n");
}
