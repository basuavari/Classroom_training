<<<<<<< HEAD
#include <stdio.h>
int main() {
  double a, b;
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);

  // swapping

  // a = (initial_a - initial_b)
  a = a - b;   

  // b = (initial_a - initial_b) + initial_b = initial_a
  b = a + b;

  // a = initial_a - (initial_a - initial_b) = initial_b
  a = b - a;

  // %.2lf displays numbers up to 2 decimal places
  printf("After swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf", b);

  return 0;
}



Output
Enter a: 10
Enter b: 12
After swapping, a = 12
After swapping, b = 10
=======
#include <stdio.h>
int main() {
  double a, b;
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);

  // swapping

  // a = (initial_a - initial_b)
  a = a - b;   

  // b = (initial_a - initial_b) + initial_b = initial_a
  b = a + b;

  // a = initial_a - (initial_a - initial_b) = initial_b
  a = b - a;

  // %.2lf displays numbers up to 2 decimal places
  printf("After swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf", b);

  return 0;
}



Output
Enter a: 10
Enter b: 12
After swapping, a = 12
After swapping, b = 10
>>>>>>> 0ac4945 (added)
