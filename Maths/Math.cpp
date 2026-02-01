// 1. To get no. of digits in a number 'N' in any base we can do:

// Number of digits in decimal (base 10)
int decimalDigits = (int)(log10(n)) + 1;

// Number of digits in hexadecimal (base 16)
int hexDigits = (int)(log(n) / log(16)) + 1;