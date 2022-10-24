
Sign up

Lordwill1
/
alx-low_level_programming
Public
NotificationsFork 75
 Star 48

 Code
 Issues
 Pull requests
 Actions
 Projects
 Security
 Insights
  master 
  alx-low_level_programming/0x02-functions_nested_loops/6-abs.c
  Go to file

  Lordwill1 Added task 6 through 11 on project 0x02 .C
  Latest commit 61193c7 on Sep 13
   History
    1 contributor
    15 lines (14 sloc)  207 Bytes
    RawBlame


#include "main.h"

    /**
     *  * _abs - computes the absolute value of an integer
     *   * @n: the int to check
     *    * Return: the absolute value of int
     *     */
    int _abs(int n)
{
		if (n >= 0)
				{
							return (n);
								}
			return (-n);
}
