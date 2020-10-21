
int i2;
double d2;
char s2[100];

scanf("%i %lf %[^\n]%*c", &i2, &d2, s2);

printf("%i\n%.1lf\n%s%s", i + i2, d + d2, s, s2);