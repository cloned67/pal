/*
 *
 * FUNCTION:
 * p_bcast(): broadcasts an array of bytes from source to a list of 
 *            destination addresses
 *
 * ARGUMENTS:
 * dst_list - an array of complete address destination pointers
 * loc_src  - complete address source pointer
 * nb       - number of bytes to copy
 * nd       - number of destinations
 * flags    - independent flags to assert, separate with '|'
 *            ASYNC : Makes copy call asynchronous (ie non-blocking)  
 *
 */
#include <stddef.h>
#include "pal_core.h"
#include "pal_private.h"

void *p_bcast (void *dst_list, const void *loc_src, size_t nb, int nd, int flags){

    int i;
      
    for (i=0;i<nd;i++){
	//1. get pointer from array of pointers based on i
	//2. memcpy(dst,src,nb);
    }
}
