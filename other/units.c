/* This header is not Epitech correct
 *
 *
 */
 
// this has to be there for the macros Test to be available
#include <criterion/criterion.h>



/* do not forget to include your my.h
#include "my.h"
*/

int two_plus_two(void)
{
  return 4;
}

int num_plus_num(int first_num, int second_num)
{
  return first_num + second_num;
}


// the unit tests begin
// plus_plus and fixed_inputs can be anything that is C-valid identifier
// the best if you make it informative

Test(plus_plus, fixed_inputs)
{
	cr_expect( two_plus_two() == 8, "Adding 2 and 2 failed");
}


Test(plus_plus, arbitrary_inputs)
{
  cr_expect( num_plus_num(4, 5) == 9, "Adding failed");
  cr_expect( num_plus_num(78, 12) == 90, "Adding failed");
  cr_expect( num_plus_num(2, 2) == 4, "Adding failed");
  cr_expect( num_plus_num(9, 5) == 14, "Adding failed");
}

