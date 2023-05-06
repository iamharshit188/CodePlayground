/*
 Some C++ data types, their format specifiers, and their most common bit widths
are as follows:

    Int ("%d"): 32 Bit integer
    Long ("%ld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value

Reading
To read a data type, use the following syntax:

scanf("`format_specifier`", &val)

For example, to read a character followed by a double:

char ch;
double d;
scanf("%c %lf", &ch, &d);

For the moment, we can ignore the spacing between format specifiers.

Printing
To print a data type, use the following syntax:

printf("`format_specifier`", val)

For example, to print a character followed by a double:

char ch = 'd';
double d = 234.432;
printf("%c %lf", ch, d);

Note: You can also use cin and cout instead of scanf and printf; however, if you
are taking a million numbers as input and printing a million lines, it is faster
to use scanf and printf.

Input Format

Input consists of the following space-separated values: int, long, char, float,
and double, respectively. line in the same order it was received as input.
Note that the floating point value should be correct up to 3 decimal places and
the double to 9 decimal places.

Output Format

Print each element on a new line in the same order it was received as input.
Note that the floating point value should be correct up to 3 decimal places and
the double to 9 decimal places.

Sample Input

3 12345678912345 a 334.23 14049.30493

Sample Output

3
12345678912345
a
334.230
14049.304930000
*/

// Code starts from here : 
/*
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  int integer;
  long longNumber;
  char ch;
  float floatingNumber;
  double decimal;
  scanf("%d %ld %c %f %lf", &integer, &longNumber, &ch, &floatingNumber, &decimal);
  printf("%d %ld %c %f %lf", integer , longNumber, ch, floatingNumber, decimal);
  // printf("%d" , integer);
  // printf("%ld" , longNumber);
  // printf("%c" , ch);
  // printf("%f" , floatingNumber);
  // printf("%lf" , decimal);
  return 0;
}
*/


// Second Approach

#include <iostream>
#include <cstdio>

int main() {
    int intValue;
    long longValue;
    char charValue;
    float floatValue;
    double doubleValue;

    // Read input values
    std::scanf("%d %ld %c %f %lf", &intValue, &longValue, &charValue, &floatValue, &doubleValue);

    // Print values with appropriate decimal precision
    std::cout << intValue << std::endl;
    std::cout << longValue << std::endl;
    std::cout << charValue << std::endl;
    std::cout.precision(3);
    std::cout << std::fixed << floatValue << std::endl;
    std::cout.precision(9);
    std::cout << std::fixed << doubleValue << std::endl;

    return 0;
}
