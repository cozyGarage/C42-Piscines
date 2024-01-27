#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

void sieve_of_eratosthenes(size_t limit, bool *is_prime)
{
    // Initialize the array with all numbers marked as prime
    for (size_t i = 2; i <= limit; i++)
        is_prime[i] = true;

    // Mark multiples of each prime as non-prime
    for (size_t i = 2; i * i <= limit; i++)
    {
        if (is_prime[i])
        {
            for (size_t j = i * i; j <= limit; j += i)
                is_prime[j] = false;
        }
    }
}

int ft_find_next_prime(int nb)
{
    const size_t limit = INT_MAX; // Maximum value for an int

    // Create an array to store whether each number is prime
    bool *is_prime = malloc((limit + 1) * sizeof(bool));
    if (is_prime == NULL)
    {
        // Handle memory allocation failure
        exit(EXIT_FAILURE);
    }

    // Use the Sieve of Eratosthenes to mark prime numbers
    sieve_of_eratosthenes(limit, is_prime);

    // Find the next prime greater than or equal to nb
    for (size_t i = nb; i <= limit; i++)
    {
        if (is_prime[i])
        {
            free(is_prime);
            return (int)i;
        }
    }

    // If no prime is found, return the maximum possible value for an int
    free(is_prime);
    return INT_MAX;
}

int main()
{
    int input = 10432543; // Replace with your desired input
    int result = ft_find_next_prime(input);

    printf("The next prime number after %d is: %d\n", input, result);

    return 0;
}

