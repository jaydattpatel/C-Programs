// author: jaydattpatel
#include <stdio.h>
#include <string.h>

int main () 
{
   int a=2022,diff,len;
   char str0[100],str1[50] = "HeLlo",str2[50] = "WoRld",str3[50],str4[50];;
   char str5[50] = "I love to write programs and write blogs.";
   char *str6,*str7="abcdefghijklmn";

   /* sprintf(string formation will be saved into str0 )  */
   sprintf(str0,"string format: %s %s %s %d ",str1,"Welcome to ",str2,a);/* sprintf to make string format  */
   printf("/*sprintf to store formated string */ %s\n",str0);

   strupr(str1);  /* str1 set all upper case */
   printf("strupr(str1) :  %s  /* str1 set all upper case */\n", str1 );

   strlwr(str2);  /* str2 set all lower case */
   printf("strlwr(str2) :  %s  /* str2 set all lower case */ \n", str2 );

   len = strlen(str1);  /* total lenghth of str1 after concatenation */
   printf("strlen(str1) :  %d  /* total lenghth of str1 after concatenation */\n", len );

   strcpy(str3, str1);  /* copy str1 into str3 */
   printf("strcpy(str3, str1) :  %s  /* copy str1 into str3 */\n", str3 );
   
   strncpy(str4, str1, 2); /* copy first n characters of str1 into str4 */
   printf("strncpy(str4, str1, 2) :  %s  /* copy first n characters of str1 into str4 */\n", str4 );

   strcat(str4, str2); /* concatenates str2 into str4 */
   printf("strcat(str4, str2): %s  /* concatenates str2 into str4 */\n", str4);

   strncat(str4, str3, 3); /* concatenates n characters of str3 into str4 */
   printf("strncat(str4, str3, 3): %s   /* concatenates n characters of str3 into str4 */\n", str4);

   /* string reverse function */
   printf("strrev(str4) :  %s  /* string reverse function */\n", strrev(str4) );   

   // str6 = strndup(str7, 4);  /* copy specific characters from str7 into str6  */
   // printf("char str6 = strndup(str7,4) :  %s\n", str6);

   str6 = strdup(str7);  /* copy str7 into str6 */
   printf("str6 = strdup(str7) :  %s  /* copy str7 into str6 */\n", str6 );

   /* srting compare by ascii value*/
   diff = strcmp(str1,str2); 
   printf("\n\n/* srting compare by ascii value*/");
   if(diff > 0) 
      {
         printf("\n%s is bigger than %s by ASCI value difference %d",str1,str2,diff);
      }
      else if(diff < 0)
      {
         printf("\n%s is smaller than %s by ASCI value difference %d",str1,str2,diff);
      }
      else
      {
         printf("\n%s is same %s by ASCI value %d",str1,str2,diff);
      }

   /* srting compare with case sansitive*/
   strlwr(str3);
   diff = strcasecmp(str1,str3);
   printf("\n\n/* srting compare with case sansitive*/");
   if(diff > 0) 
      {
         printf("\n%s is bigger than %s by case value difference %d",str1,str3,diff);
      }
   else if(diff < 0)
      {
         printf("\n%s is smaller than %s by case value difference %d",str1,str3,diff);
      }
   else
      {
         printf("\n%s is same %s by case value %d",str1,str3,diff);
      }
   /* string first occurence of given character in string (first match will return) */
   printf("\n\nstrchr(str5,'p') find character : %s",strchr(str5,'p'));
   printf("\nstrchr(str5,'w') find character : %s",strchr(str5,'w'));
   printf("\nstrchr(str5,'z') find character : %s",strchr(str5,'z'));

   /* string last occurence of given characters in string (last match will return)*/
   printf("\n\nstrrchr(str5,'p') find character : %s",strrchr(str5,'p'));
   printf("\nstrrchr(str5,'w') find character : %s",strrchr(str5,'w'));
   printf("\nstrrchr(str5,'z') find character : %s",strrchr(str5,'z'));

   /* string first occurence of given characters in other string (match word)*/
   printf("\n\nstrstr(str5,\"love\") find word : %s",strstr(str5,"love"));
   printf("\nstrstr(str5,\"write\") find word : %s",strstr(str5,"write"));
   printf("\nstrstr(str5,\"zero\") find word : %s",strstr(str5,"zero"));

   /* set all character in string */
   printf("\n\nstr3: %s",str3);
   printf("\nstrnset(str3,'*',2):%s \t// set n character by strnset()",strnset(str3,'*',2)); // set n character by strnset()
   printf("\nstrset(str3,'#'):%s \t// set all character ny strset()",strset(str3,'#')); // set all character ny strset()

   return 0;
}