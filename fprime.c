 #include <libc.h>

void fprime(unsigned int a)
{
	if(a == 1)
		printf("1");
	int i = 2;
	while(a > 1)
    {
        if(a % i == 0)
        {
            printf("%d", i);
            if(a != i)
                printf("*");
            a /= i;
            i = 2;
        }
        i++;
    }
}

int main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
}
