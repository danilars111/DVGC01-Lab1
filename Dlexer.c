/**********************************************************************/
/* lab 1 DVG C01 - Driver OBJECT                                      */
/**********************************************************************/

/**********************************************************************/
/* Include files                                                      */
/**********************************************************************/
#include <stdio.h>

/**********************************************************************/
/* Other OBJECT's METHODS (IMPORTED)                                  */
/**********************************************************************/
#include "lexer.h"
 void pbuffer();
 void get_prog();
/**********************************************************************/
/* The main function (the driver)                                     */
/**********************************************************************/
int main()
{
   int i=0, t=0;
   get_prog();
   pbuffer();	
   for (i=0; t!='$'; i++)
   printf("\n token is %4d, lexeme is %10s ", t=get_token(), get_lexeme());
   printf("\n\n");
   }

/**********************************************************************/
/* End of code                                                        */
/**********************************************************************/

