#include <stdio.h>
#include <string.h>

int main()
{
    char a[30];
    int c, n = 1;
    printf("Enter Year: ");
    scanf("%d", &c);
    printf("Enter Day of 1st January: ");
    scanf("%s", &a);

    if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0 || strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0 || strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0 || strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0 || strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0 || strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0 || strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)

    {

        if ((c % 4 == 0 && c % 100 != 0) || c % 400 == 0)
        {
            for (int b = 1; b <= 12; b++)
            {

                if (b == 1)
                {
                    printf("\nJanuary\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }
                    }
                }

                if (b == 2)
                {
                    printf("\n\nFebruary\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 29; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }
                    }
                }

                if (b == 3)
                {
                    printf("\n\nMarch\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t\t %d \t ", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d    \t ", n);
                            }
                            if (n > 1)
                                printf("%d \t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }
                    }
                }

                if (b == 4)
                {
                    printf("\n\nApril\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (n = 1; n <= 30; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }
                    }
                }

                if (b == 5)
                {
                    printf("\n\nMay\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d \t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d     \t ", n);
                            }
                            if (n > 1)
                                printf("%d \t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }
                    }
                }

                if (b == 6)
                {
                    printf("\n\nJune\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 30; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t\t\t %d \t ", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }
                    }
                }

                if (b == 7)
                {
                    printf("\n\nJuly\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }
                    }
                }

                if (b == 8)
                {
                    printf("\n\nAugust\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }
                    }
                }

                if (b == 9)
                {
                    printf("\n\nSeptember\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 30; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t\t\t\t %d \t", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }
                    }
                }

                if (b == 10)
                {
                    printf("\n\nOctober\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d \t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d     \t ", n);
                            }
                            if (n > 1)
                                printf("%d \t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }
                    }
                }

                if (b == 11)
                {
                    printf("\n\nNovember\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 30; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t\t %d \t ", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d    \t ", n);
                            }
                            if (n > 1)
                                printf("%d \t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }
                    }
                }

                if (b == 12)
                {
                    printf("\n\nDecember\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t\t\t\t %d \t", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }
                    }
                }
            }
        }

        else
        {
            for (int b = 1; b <= 12; b++)
            {

                if (b == 1)
                {
                    printf("\nJanuary\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }
                    }
                }

                if (b == 2)
                {
                    printf("\n\nFebruary\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 28; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }
                    }
                }

                if (b == 3)
                {
                    printf("\n\nMarch\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t %d \t ", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }
                    }
                }

                if (b == 4)
                {
                    printf("\n\nApril\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 30; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t\t\t\t %d \t", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }
                    }
                }

                if (b == 5)
                {
                    printf("\n\nMay\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d \t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d     \t ", n);
                            }
                            if (n > 1)
                                printf("%d \t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }
                    }
                }

                if (b == 6)
                {
                    printf("\n\nJune\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 30; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t\t %d \t ", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d    \t ", n);
                            }
                            if (n > 1)
                                printf("%d \t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }
                    }
                }

                if (b == 7)
                {
                    printf("\n\nJuly\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t\t\t\t %d \t", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }
                    }
                }

                if (b == 8)
                {
                    printf("\n\nAugust\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d \t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d     \t ", n);
                            }
                            if (n > 1)
                                printf("%d \t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }
                    }
                }

                if (b == 9)
                {
                    printf("\n\nSeptember\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 30; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t\t\t %d \t ", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }
                    }
                }

                if (b == 10)
                {
                    printf("\n\nOctober\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }
                    }
                }

                if (b == 11)
                {
                    printf("\n\nNovember\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 30; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t %d \t ", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }
                    }
                }

                if (b == 12)
                {
                    printf("\n\nDecember\nSunday Monday Tuesday Wednesday Thursday Friday Saturday\n");
                    for (int n = 1; n <= 31; n++)
                    {
                        if (strcmp(a, "Sunday") == 0 || strcmp(a, "sunday") == 0 || strcmp(a, "SUNDAY") == 0)
                        {
                            if (n == 1)
                                printf("\t\t\t\t\t %d \t ", n);
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 2 || n == 9 || n == 16 || n == 23 || n == 30)
                                printf("\n");
                        }

                        if (strcmp(a, "Monday") == 0 || strcmp(a, "MONDAY") == 0 || strcmp(a, "monday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 1 || n == 8 || n == 15 || n == 22 || n == 29)
                                printf("\n");
                        }

                        if (strcmp(a, "Tuesday") == 0 || strcmp(a, "tuesday") == 0 || strcmp(a, "TUESDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("%d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 7 || n == 14 || n == 21 || n == 28)
                                printf("\n");
                        }

                        if (strcmp(a, "Wednesday") == 0 || strcmp(a, "WEDNESDAY") == 0 || strcmp(a, "wednesday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 6 || n == 13 || n == 20 || n == 27)
                                printf("\n");
                        }

                        if (strcmp(a, "Thursday") == 0 || strcmp(a, "thursday") == 0 || strcmp(a, "THURSDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 5 || n == 12 || n == 19 || n == 26)
                                printf("\n");
                        }

                        if (strcmp(a, "Friday") == 0 || strcmp(a, "FRIDAY") == 0 || strcmp(a, "friday") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 4 || n == 11 || n == 18 || n == 25)
                                printf("\n");
                        }

                        if (strcmp(a, "Saturday") == 0 || strcmp(a, "saturday") == 0 || strcmp(a, "SATURDAY") == 0)
                        {
                            if (n == 1)
                            {
                                printf("\t\t\t\t %d   \t ", n);
                            }
                            if (n > 1)
                                printf("%d\t ", n);
                            if (n == 3 || n == 10 || n == 17 || n == 24 || n == 31)
                                printf("\n");
                        }
                    }
                }
            }
        }
    }
    else
        printf("INVALID FORMAT OF DAY!     TYPE FULL SPELLING OF DAY!!");
    return 0;
}