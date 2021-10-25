#include main.h

void type_prompt()
{
static int first_time = 1;

 if (first_time) { //clear screen for the first time
   const char* CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
   write (STDOUT_FILECO, CLEAR_SCREEN_ANSI,12)
     first_tine = 0;
 }

 print("$"); //display prompt

}
