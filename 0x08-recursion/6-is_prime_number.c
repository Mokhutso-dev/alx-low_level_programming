#include "main.h"
#include <stdio.h>
int is_prime_number(int n)
{
  if (n == 1)
    return (1);
  return (sqtRecursive(n / 2, n));
}
/**
 * is_prime_number - checks if a given number is prime
 * @n: given number
 * Return: 1 if number is prime else 0
 **/
int is_prime_number(int n)
{
  if (n <= 1 || _sqrt_recursion(n) >= 1)
    return (0);
  if (_sqrt_recursion(n) == -1)
    return (1);
  return (_sqrt_recursion(n));
}
