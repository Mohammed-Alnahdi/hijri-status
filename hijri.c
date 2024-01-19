#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include<stdbool.h>
#include<unistd.h>
#include"hijri.h"

int
main(int argc, char *argv[]) { 

 const time_t current_time = time(NULL);
 struct tm * t = localtime(&current_time);
 int d = t -> tm_mday, m = (t -> tm_mon) + 1, y = (t -> tm_year) + 1900;
 int c = getopt(argc, argv, "ibl");
 PrintCalender(d, m , y);

  while(c!=-1)
  {
    switch(c) 
    {
    case 'i':
//      PrintCalender(d, m , y);
      printf("\nflag i\n");
      break;
    case 'b':
//      _PrintCalender(d, m, y);
      printf("\nflag b\n");
      break;
    case 'l':
      printf("Just Test it");
      printf("\nHello Blocks\n");
      break;
    default: /* '?' */
      break;
    }

   exit(EXIT_SUCCESS);
  }

   exit(EXIT_SUCCESS);
}//main function 
  
 
