#include <stdio.h>
#include <string.h>
#define ARRAY_LEN(x) ((int) (sizeof((x)) / sizeof((x)[0])))

struct dial{
	char *country;
	int code;
};

const struct dial country_codes[]
    {{"Argentina",            54}, {"Bangladesh",     889},
     {"South Africa",         27}, {"South Korea",     82},
     {"Ukraine",             380}, {"United Kingdom",  44},
     {"United States",         1}, {"Vietnam",         84}};
							
int main(void)
{
	 int code, i;

    printf("Enter an international dialing code: ");
    scanf("%d", &code);

    for (i = 0; i < ARRAY_LEN(country_codes); i++) {
        if (country_codes[i].code == code) {
            printf("%d is the code for %s.\n", code, country_codes[i].country);
            return 0;
        }
    }

    printf("Error: %d is not a valid country code.\n", code);
    return 0;
}



