#include <stdio.h>

int ft_sqrt(int nb);

int main() {
    // Example usage:
    int number = 46339*46339; // You can change this number to test different cases
    int result = ft_sqrt(number);

    if (result != 0) {
        printf("Square root of %d is: %d\n", number, result);
    } else {
        printf("The square root of %d is an irrational number.\n", number);
    }

    return 0;
}

int ft_sqrt(int nb) {
    if (nb < 0) {
        // Negative numbers don't have real square roots
        return 0;
    }

    if (nb == 0 || nb == 1) {
        // Square root of 0 or 1 is the number itself
        return nb;
    }

    int low = 1;
    int high = nb;
    int result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid <= nb / mid) {
            // If mid * mid is less than or equal to nb, update result and search in the right half
            low = mid + 1;
            result = mid;
        } else {
            // If mid * mid is greater than nb, search in the left half
            high = mid - 1;
        }
    }

    return result;
}
