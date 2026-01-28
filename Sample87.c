#include <stdio.h>

int main()
{
    int roomType;
    char season;
    int tariff;
    scanf("%d", &roomType);
    scanf(" %c", &season);
    switch(roomType)
    {
        case 1:  
            switch(season)
                {
            case 'A':
                tariff = 2500;
                break;

            case 'B':
                    tariff = 2000;
                    break;
                }
                    break;

        case 2:  
            switch(season)
            {
            case 'C':
                    tariff = 4000;
                    break;

                    case 'D':
                            tariff = 3000;
                            break;
                    }
                    break;
            }

            printf("₹%d", tariff);

            return 0;
        }