#include <stdio.h>
#include <ctype.h>

int atoi(const char* str) {
int result = 0;
int sign = 1;
int i = 0;

// Handle leading whitespace
while (isspace(str[i]))
i++;

// Handle sign
if (str[i] == '-') {
sign = -1;
i++;
} else if (str[i] ==
i++;
}

// Convert string to integer
while (isdigit(str[i])) {
result = result * 10 + (str[i] - '0');
i++;
}
return result * sign;
}
int main() {
const char* str = "12345";
int number = atoi(str);
printf("The converted number is: %d\n", number);
return 0;
}
