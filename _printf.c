#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
    int printed_chars = 0;
    va_list args;

    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++; /* advance to the conversion specifier */
            if (*format == '\0') { /* unexpected end of format string */
                va_end(args);
                return -1;
            }
            if (*format == '%') { /* handle the %% case */
                write(1, "%", 1);
                printed_chars++;
            } else if (*format == 'c') { /* handle the %c case */
                char c = (char) va_arg(args, int);
                write(1, &c, 1);
                printed_chars++;
            } else if (*format == 's') { /* handle the %s case */
                char *s = va_arg(args, char *);
                while (*s != '\0') {
                    write(1, s, 1);
                    s++;
                    printed_chars++;
                }
            } else { /* handle unknown conversion specifiers */
                va_end(args);
                return -1;
            }
        } else { /* handle regular characters */
            write(1, format, 1);
            printed_chars++;
        }
        format++;
    }

    va_end(args);
    return printed_chars;
}
