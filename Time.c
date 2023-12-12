
// author: jaydattpatel
  #include<stdio.h>
  #include<time.h>
  
/* inbuilt structure in time.h file     
struct tm {
               int tm_sec;         //seconds
               int tm_min;         //minutes
               int tm_hour;        //hours
               int tm_mday;        //day of the month
               int tm_mon;         //month
               int tm_year;        //year
               int tm_wday;        //day of the week
               int tm_yday;        //day in the year
               int tm_isdst;       //daylight saving time
           };  */

  int main() 
  {
        time_t tp, ret1, ret2;
        double time_diff;
        struct tm *t;
        char *str;
        tp = time(NULL);

        t = gmtime(&tp); //gmtime() converts the calendar time into UTC/GMT.
        str = asctime(t);
        printf("GMT: %s\n", str);

        str = ctime(&tp);
        printf("IST: %s\n", str);

        t = localtime(&tp);   //localtime() converts calendar time to local time
        str = asctime(t);
        printf("Local time: %s\n", str);

        
        printf("First time(NULL):%ld\n", ret1 = time(NULL));
        printf("Wait 10 sec........\n");

        sleep(10);
      
        printf("Second time(&tp): %ld\n", ret2 = time(&tp));

        time_diff = difftime(ret2, ret1);
        printf("Difftime:%lf\n", time_diff);
        return 0;
  }