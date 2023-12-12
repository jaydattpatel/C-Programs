// author: jaydattpatel
#include <stdio.h>

enum day{sun, mon, tue, wed, thu, fri, sat}; //declare type enum
//enum day{0:sun, 1:mon, 2:tue, 3:wed, 4:thu, 5:fri, 6:sat}; //declare type enum
enum month{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

void print_day(enum day d)
{
    switch(d)
    {
        case sun: printf(" sunday \n"); break;
        case mon: printf(" monday \n"); break;
        case tue: printf(" tuesday \n"); break;
        case wed: printf(" wednesday \n"); break;
        case thu: printf(" thursday \n"); break;
        case fri: printf(" friday \n"); break; 
        case sat: printf(" saturday \n"); break;
        default: printf("%d is an error day\n", d);
    }
}

enum day next_day(enum day d)
{
    return((d+1) % 7);  // set range in 0 to 6 for enum day array.
}

enum day get_day(enum day m)
    {
        return(m);
    }

void print_month(enum month d)
{
    switch(d)
    {
        case jan: printf(" january \n"); break;
        case feb: printf(" february \n"); break;
        case mar: printf(" march \n"); break;
        case apr: printf(" april \n"); break;
        case may: printf(" may \n"); break;
        case jun: printf(" june \n"); break; 
        case jul: printf(" july \n"); break;
        case aug: printf(" august \n"); break;
        case sep: printf(" september \n"); break;
        case oct: printf(" octomber \n"); break;
        case nov: printf(" november \n"); break;
        case dec: printf(" december \n"); break;
        default: printf("%d is an error month\n", d);
    }
}
enum month next_month(enum month d)
{
    return((d+1) % 12);  // set range in 0 to 6 for enum day array.
}

enum month get_month(enum month m)
    {
        return(m);
    }

int main()
{

    // day print and access
    enum day today;
    for(int i=0;i<7;i++)
        {
            today = i;
            print_day(today);
        }
    printf("\nToday: ");
    today = sun; 
    print_day(today); 
    printf("\nnext_day(today):");
    print_day(next_day(today));
    printf("\nget_day(fri):");
    print_day(get_day(fri));
    printf("\nprint_day(6): ");
    print_day(6);
    printf("\n\n");

    // month print and access
    enum month month;
    for(int i=0;i<12;i++)
        {
            month = i;
            print_month(month);
        }
    printf("\nThis month: ");
    month = dec; 
    print_month(month); 
    printf("\next_month(month):");
    print_month(next_month(month));
    printf("\nget_month(jun):");
    print_month(get_month(jun));
    printf("\nprint_month(11): ");
    print_month(11);

    return 0;
}