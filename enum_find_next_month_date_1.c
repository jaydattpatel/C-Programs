// author: jaydattpatel
#include <stdio.h>
enum month{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

int get_month_days(enum month *m)
{

int max_days;

switch(*m)
    {
        case 0: max_days = 31; break;
        case 1: max_days = 28; break;
        case 2: max_days = 31; break;
        case 3: max_days = 30; break;
        case 4: max_days = 31; break;
        case 5: max_days = 30; break;
        case 6: max_days = 31; break;
        case 7: max_days = 31; break;
        case 8: max_days = 30; break;
        case 9: max_days = 31; break;
        case 10: max_days = 30; break;
        case 11: max_days = 31; break;
        default: printf("%d is an error\n", m);
    }
    return(max_days);
};


void print_month_date(enum month d,int date)
{
    switch(d)
    {
        case jan: printf(" january %d\n",date); break;
        case feb: printf(" february %d\n",date); break;
        case mar: printf(" march %d\n",date); break;
        case apr: printf(" april %d\n",date); break;
        case may: printf(" may %d\n",date); break;
        case jun: printf(" june %d\n",date); break; 
        case jul: printf(" july %d\n",date); break;
        case aug: printf(" august %d\n",date); break;
        case sep: printf(" september %d\n",date); break;
        case oct: printf(" octomber %d\n",date); break;
        case nov: printf(" november %d\n",date); break;
        case dec: printf(" december %d\n",date); break;
        default: printf("%d is an error\n", d);
    }
}
void print_next_date(enum month *month,int *date)
{
    enum month next_month,old_month = *month;
    int next_date;

    if((*date+1) > (get_month_days(&old_month)))  //compare days of old month with (current date+1) for next month.
    {
        next_month = (*month+1) % 12;   // increment in month with limit of total 12 months and move for next month
    }
    else
    {
        next_month = *month;    //not incremented moved for no month change.
    }
    next_date = (*date+1) % (get_month_days(&old_month));   //increament date with limit of days of exist month
    printf("Next date:");
    print_month_date(next_month,next_date);

}

void print(enum month month,int date)
{
    print_month_date(month,date);
    print_next_date(&month,&date);
}

int main()
{
    enum month month;
    int date;

    date = 31;
    month = jan;
    print(month,date);

    date = 28;
    month = feb;
    print(month,date);

    date = 14;
    month = mar;
    print(month,date);

    date = 31;
    month = oct;
    print(month,date);

    date = 31;
    month = dec;
    print(month,date);

    return 0;
}