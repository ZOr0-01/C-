 1. Sum of first n natural numbers using a function 

#include <stdio.h> 
 
int sum(int n) 
{ 
    int i, total = 0; 
    for(i = 1; i <= n; i++) 
        total = total + i; 
    return total; 
} 
 
int main() 
{ 
    int n; 
    printf("Enter n: "); 
    scanf("%d", &n); 
 
    printf("Sum = %d", sum(n)); 
    return 0; 
} 

 

2. Area and perimeter of a circle 

#include <stdio.h> 
 
int main() 
{ 
    float r, area, perimeter; 
    printf("Enter radius: "); 
    scanf("%f", &r); 
 
    area = 3.14 * r * r; 
    perimeter = 2 * 3.14 * r; 
 
    printf("Area = %.2f\n", area); 
    printf("Perimeter = %.2f", perimeter); 
    return 0; 
} 

 

3. Previous and next character 

#include <stdio.h> 
 
int main() 
{ 
    char ch; 
    printf("Enter a character: "); 
    scanf(" %c", &ch); 
 
    printf("Previous character = %c\n", ch - 1); 
    printf("Next character = %c", ch + 1); 
    return 0; 
} 

 

4. Convert Fahrenheit to Celsius 

#include <stdio.h> 
 
int main() 
{ 
    float f, c; 
    printf("Enter temperature in Fahrenheit: "); 
    scanf("%f", &f); 
 
    c = (f - 32) * 5 / 9; 
    printf("Temperature in Celsius = %.2f", c); 
    return 0; 
} 

 

5. Check even or odd using a function 

#include <stdio.h> 
 
void check(int n) 
{ 
    if(n % 2 == 0) 
        printf("Even number"); 
    else 
        printf("Odd number"); 
} 
 
int main() 
{ 
    int n; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
 
    check(n); 
    return 0; 
} 

 

6. Check whether the first number lies between the other two 

#include <stdio.h> 
 
int main() 
{ 
    int a, b, c; 
    printf("Enter three numbers: "); 
    scanf("%d%d%d", &a, &b, &c); 
 
    if((a >= b && a <= c) || (a >= c && a <= b)) 
        printf("%d lies between %d and %d", a, b, c); 
    else 
        printf("%d does not lie between %d and %d", a, b, c); 
 
    return 0; 
} 

 

7. Identify digit, uppercase or lowercase character 

#include <stdio.h> 
 
int main() 
{ 
    char ch; 
    printf("Enter a character: "); 
    scanf(" %c", &ch); 
 
    if(ch >= '0' && ch <= '9') 
        printf("Digit"); 
    else if(ch >= 'A' && ch <= 'Z') 
        printf("Uppercase letter"); 
    else if(ch >= 'a' && ch <= 'z') 
        printf("Lowercase letter"); 
    else 
        printf("Special character"); 
 
    return 0; 
} 

 

8. Check vowel or consonant 

#include <stdio.h> 
 
int main() 
{ 
    char ch; 
    printf("Enter an alphabet: "); 
    scanf(" %c", &ch); 
 
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') 
        printf("Vowel"); 
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        printf("Consonant"); 
    else 
        printf("Not an alphabet"); 
 
    return 0; 
} 

 

9. Check whether the entered time is valid 

#include <stdio.h> 
 
int main() 
{ 
    int h, m, s; 
    printf("Enter hours, minutes and seconds: "); 
    scanf("%d%d%d", &h, &m, &s); 
 
    if(h >= 0 && h <= 23 && m >= 0 && m <= 59 && 
       s >= 0 && s <= 59) 
        printf("Valid time"); 
    else 
        printf("Invalid time"); 
 
    return 0; 
} 

 

10. Check leap year 

#include <stdio.h> 
 
int main() 
{ 
    int year; 
    printf("Enter year: "); 
    scanf("%d", &year); 
 
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
        printf("Leap year"); 
    else 
        printf("Not a leap year"); 
 
    return 0; 
} 

 

11. Simple calculator using an operator 

#include <stdio.h> 
 
int main() 
{ 
    int a, b; 
    char op; 
    printf("Enter two integers: "); 
    scanf("%d%d", &a, &b); 
    printf("Enter operator (+, -, *, /): "); 
    scanf(" %c", &op); 
 
    switch(op) 
    { 
        case '+': printf("Result = %d", a + b); break; 
        case '-': printf("Result = %d", a - b); break; 
        case '*': printf("Result = %d", a * b); break; 
        case '/': 
            if(b != 0) 
                printf("Result = %.2f", (float)a / b); 
            else 
                printf("Division by zero is not possible"); 
            break; 
        default: printf("Invalid operator"); 
    } 
    return 0; 
} 

 

12. Display all even numbers up to n 

#include <stdio.h> 
 
int main() 
{ 
    int n, i; 
    printf("Enter n: "); 
    scanf("%d", &n); 
 
    for(i = 2; i <= n; i = i + 2) 
        printf("%d ", i); 
 
    return 0; 
} 

 

13. Sum of all integers between x and y (inclusive) 

#include <stdio.h> 
 
int main() 
{ 
    int x, y, i, sum = 0, temp; 
    printf("Enter x and y: "); 
    scanf("%d%d", &x, &y); 
 
    if(x > y) 
    { 
        temp = x; 
        x = y; 
        y = temp; 
    } 
 
    for(i = x; i <= y; i++) 
        sum = sum + i; 
 
    printf("Sum = %d", sum); 
    return 0; 
} 

 

14. Calculate x raised to the power y 

#include <stdio.h> 
 
int main() 
{ 
    int x, y, i; 
    long long result = 1; 
    printf("Enter base x and power y: "); 
    scanf("%d%d", &x, &y); 
 
    for(i = 1; i <= y; i++) 
        result = result * x; 
 
    printf("Answer = %lld", result); 
    return 0; 
} 

 

15. Count the number of digits 

#include <stdio.h> 
 
int main() 
{ 
    int n, count = 0; 
    printf("Enter an integer: "); 
    scanf("%d", &n); 
 
    if(n < 0) 
        n = -n; 
 
    if(n == 0) 
        count = 1; 
    else 
    { 
        while(n > 0) 
        { 
            count++; 
            n = n / 10; 
        } 
    } 
 
    printf("Number of digits = %d", count); 
    return 0; 
} 

 

16. Find sum of digits 

#include <stdio.h> 
 
int main() 
{ 
    int n, digit, sum = 0; 
    printf("Enter an integer: "); 
    scanf("%d", &n); 
 
    if(n < 0) 
        n = -n; 
 
    while(n > 0) 
    { 
        digit = n % 10; 
        sum = sum + digit; 
        n = n / 10; 
    } 
 
    printf("Sum of digits = %d", sum); 
    return 0; 
} 

 

17. Reverse a number 

#include <stdio.h> 
 
int main() 
{ 
    int n, digit, reverse = 0; 
    printf("Enter an integer: "); 
    scanf("%d", &n); 
 
    while(n != 0) 
    { 
        digit = n % 10; 
        reverse = reverse * 10 + digit; 
        n = n / 10; 
    } 
 
    printf("Reverse = %d", reverse); 
    return 0; 
} 

 

18. Display next n characters 

#include <stdio.h> 
 
int main() 
{ 
    char ch; 
    int n, i; 
    printf("Enter a character and n: "); 
    scanf(" %c%d", &ch, &n); 
 
    for(i = 1; i <= n; i++) 
        printf("%c ", ch + i); 
 
    return 0; 
} 

 

19. Check Armstrong number (three-digit number) 

#include <stdio.h> 
 
int main() 
{ 
    int n, original, digit, sum = 0; 
    printf("Enter a three-digit number: "); 
    scanf("%d", &n); 
 
    original = n; 
    while(n > 0) 
    { 
        digit = n % 10; 
        sum = sum + digit * digit * digit; 
        n = n / 10; 
    } 
 
    if(sum == original) 
        printf("Armstrong number"); 
    else 
        printf("Not an Armstrong number"); 
 
    return 0; 
} 

 

20. Print Fibonacci series up to n terms 

#include <stdio.h> 
 
int main() 
{ 
    int n, i, a = 0, b = 1, c; 
    printf("Enter number of terms: "); 
    scanf("%d", &n); 
 
    for(i = 1; i <= n; i++) 
    { 
        printf("%d ", a); 
        c = a + b; 
        a = b; 
        b = c; 
    } 
 
    return 0; 
} 

 

21. Print the number pattern: 1 / 1 2 / 1 2 3 

#include <stdio.h> 
 
int main() 
{ 
    int i, j; 
    for(i = 1; i <= 3; i++) 
    { 
        for(j = 1; j <= i; j++) 
            printf("%d ", j); 
        printf("\n"); 
    } 
    return 0; 
} 

 

22. Print consecutive numbers in a triangle 

#include <stdio.h> 
 
int main() 
{ 
    int i, j, num = 1; 
    for(i = 1; i <= 3; i++) 
    { 
        for(j = 1; j <= i; j++) 
        { 
            printf("%d ", num); 
            num++; 
        } 
        printf("\n"); 
    } 
    return 0; 
} 

 

23. Print the star triangle pattern (as shown in the question) 

#include <stdio.h> 
 
int main() 
{ 
    int i, j; 
    for(i = 1; i <= 3; i++) 
    { 
        for(j = 1; j <= i; j++) 
            printf("* "); 
        printf("\n"); 
    } 
    return 0; 
} 

 

24. Print the star triangle pattern (Question 24) 

#include <stdio.h> 
 
int main() 
{ 
    int i, j; 
    for(i = 1; i <= 3; i++) 
    { 
        for(j = 1; j <= i; j++) 
            printf("* "); 
        printf("\n"); 
    } 
    return 0; 
} 

 

25. Recursive function to find sum of digits 

#include <stdio.h> 
 
int sumDigits(int n) 
{ 
    if(n == 0) 
        return 0; 
    return (n % 10) + sumDigits(n / 10); 
} 
 
int main() 
{ 
    int n; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
 
    if(n < 0) 
        n = -n; 
 
    printf("Sum of digits = %d", sumDigits(n)); 
    return 0; 
} 

 

26. Recursive function to calculate x raised to y 

#include <stdio.h> 
 
int power(int x, int y) 
{ 
    if(y == 0) 
        return 1; 
    return x * power(x, y - 1); 
} 
 
int main() 
{ 
    int x, y; 
    printf("Enter base and power: "); 
    scanf("%d%d", &x, &y); 
 
    printf("Answer = %d", power(x, y)); 
    return 0; 
} 

 

27. Addition of array elements 

#include <stdio.h> 
 
int main() 
{ 
    int a[100], n, i, sum = 0; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    printf("Enter array elements:\n"); 
    for(i = 0; i < n; i++) 
    { 
        scanf("%d", &a[i]); 
        sum = sum + a[i]; 
    } 
 
    printf("Sum = %d", sum); 
    return 0; 
} 

 

28. Find maximum and minimum element in an array 

#include <stdio.h> 
 
int main() 
{ 
    int a[100], n, i, max, min; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    printf("Enter array elements:\n"); 
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
 
    max = min = a[0]; 
 
    for(i = 1; i < n; i++) 
    { 
        if(a[i] > max) 
            max = a[i]; 
        if(a[i] < min) 
            min = a[i]; 
    } 
 
    printf("Maximum = %d\n", max); 
    printf("Minimum = %d", min); 
    return 0; 
} 

 

29. Search for a particular element in an array 

#include <stdio.h> 
 
int main() 
{ 
    int a[100], n, i, key, found = 0; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    printf("Enter array elements:\n"); 
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
 
    printf("Enter element to search: "); 
    scanf("%d", &key); 
 
    for(i = 0; i < n; i++) 
    { 
        if(a[i] == key) 
        { 
            found = 1; 
            break; 
        } 
    } 
 
    if(found == 1) 
        printf("Element found at position %d", i + 1); 
    else 
        printf("Element not found"); 
 
    return 0; 
} 

 

30. Print an array in reverse order 

#include <stdio.h> 
 
int main() 
{ 
    int a[100], n, i; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    printf("Enter array elements:\n"); 
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
 
    printf("Array in reverse order:\n"); 
    for(i = n - 1; i >= 0; i--) 
        printf("%d ", a[i]); 
 
    return 0; 
} 

 

31. Addition of two matrices 

#include <stdio.h> 
 
int main() 
{ 
    int a[10][10], b[10][10], c[10][10]; 
    int r, col, i, j; 
 
    printf("Enter rows and columns: "); 
    scanf("%d%d", &r, &col); 
 
    printf("Enter first matrix:\n"); 
    for(i = 0; i < r; i++) 
        for(j = 0; j < col; j++) 
            scanf("%d", &a[i][j]); 
 
    printf("Enter second matrix:\n"); 
    for(i = 0; i < r; i++) 
        for(j = 0; j < col; j++) 
            scanf("%d", &b[i][j]); 
 
    for(i = 0; i < r; i++) 
        for(j = 0; j < col; j++) 
            c[i][j] = a[i][j] + b[i][j]; 
 
    printf("Addition of matrices:\n"); 
    for(i = 0; i < r; i++) 
    { 
        for(j = 0; j < col; j++) 
            printf("%d ", c[i][j]); 
        printf("\n"); 
    } 
    return 0; 
} 

 

32. Subtraction of two matrices 

#include <stdio.h> 
 
int main() 
{ 
    int a[10][10], b[10][10], c[10][10]; 
    int r, col, i, j; 
 
    printf("Enter rows and columns: "); 
    scanf("%d%d", &r, &col); 
 
    printf("Enter first matrix:\n"); 
    for(i = 0; i < r; i++) 
        for(j = 0; j < col; j++) 
            scanf("%d", &a[i][j]); 
 
    printf("Enter second matrix:\n"); 
    for(i = 0; i < r; i++) 
        for(j = 0; j < col; j++) 
            scanf("%d", &b[i][j]); 
 
    for(i = 0; i < r; i++) 
        for(j = 0; j < col; j++) 
            c[i][j] = a[i][j] - b[i][j]; 
 
    printf("Subtraction of matrices:\n"); 
    for(i = 0; i < r; i++) 
    { 
        for(j = 0; j < col; j++) 
            printf("%d ", c[i][j]); 
        printf("\n"); 
    } 
    return 0; 
} 