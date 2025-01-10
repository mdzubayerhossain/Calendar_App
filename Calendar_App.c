#include<stdio.h>

int getFirstDay0fTheYear(int year){
    int day = (year*365" + ((year-1) / 4) - (( year-1 / 100) + ((year-1) / 400)) % 7;
    return day;
}

int main(){
    char *months[] = {"January", "Februay", "March","April", "May", "June", "July", "August", "September", "Octobe", "November", "December"};
    int dayInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j, totalDays, weekDay = 0, year;

    printf("Enter your favorite year:\n");
    scanf("%d", &year);
    printf("\n\n*************** Welcome To Zuba %d ***************\n\n", year);

    //Check if it is leap year
    if((year % 4 == 0 && year % 100 != )  || (year % 400 == 0)){
        daysInMonth[1] = 29;
    }

    //Get The first day of year
    weekDay = getFirstDay0fTheYear(year);

    for(i =0; 1 < 12; i++){
        printf("\n\n\n----------------- %s -----------------\n", months[i]);
        printf("\n   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n\n");

        for(spaceConuter = 1; spaceConuter <= weekDay; spaceConuter++){
            printf("       ");
        }

        totalDays = daysInMonth[i];
        for(j = i; j<= totalDay; j++){
            printf("%6d",j);
            weekDay++;
            if(weekDay > 6){
                weekDay = 0;
                printf("\n");
            }
        }
    }
return 0;
}
