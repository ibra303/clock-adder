#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct  Clock
{
	int  hour, minute;
} clock_t;
void calculatenewclock(clock_t p, int add);
int main()
{
	clock_t p;
	int minutestoadd;
	printf("Enter time and minutes to add: ");
	scanf("%d%d%d", &p.hour, &p.minute, &minutestoadd);
	// scan if the hour and the minute in right range //
	if (p.hour > 23 || p.minute > 59 || p.hour < 0 || p.minute < 0)
	{
		printf("This not a real time ");
		exit(1);
	}
	calculatenewclock(p, minutestoadd);
	return 0;
}
// function name : calculatenewclock //
// input : clock struct and the minutes to add // 
// output : prints the current time and the new time //
// algorithim : none //
void calculatenewclock(clock_t p, int add)
{
	int sumofminutes;
	printf("The time is: ");
	if (p.hour <= 9)
		printf("%.2d:", p.hour);
	else
		printf("%d:", p.hour);
	if (p.minute <= 9)
		printf("%.2d\n", p.minute);
	else
		printf("%d\n", p.minute);
	sumofminutes = (p.hour * 60) + p.minute + add;
	p.hour = sumofminutes / 60;
	p.minute = sumofminutes - (p.hour * 60);
	if (p.hour > 23)
		p.hour = p.hour - 24;
	printf("The new time is: ");
	if (p.hour <= 9)
		printf("%.2d:", p.hour);
	else
		printf("%d:", p.hour);
	if (p.minute <= 9)
		printf("%.2d", p.minute);
	else
		printf("%d", p.minute);
}

