#include <stdio.h>
void checkPalindrome(int n){
  int remainder=0,reversed=0,original=n;
  while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
  if (original == reversed)
    printf("%d is a palindrome.", original);
  else
    printf("%d is not a palindrome.", original);
}
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
  checkPalindrome(n);

    return 0;
}
