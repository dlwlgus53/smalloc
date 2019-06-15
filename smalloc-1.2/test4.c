#include <stdio.h>
#include "smalloc.h"

int 
main()
{
	void *p1, *p2, *p3, *p4 ;

	print_sm_containers() ;

	p1 = smalloc(5000) ; 
	printf("smalloc(5000)\n") ; 
	print_sm_containers() ;
	
	p2 = smalloc(3500) ; 
	printf("smalloc(3500)\n") ; 
	print_sm_containers() ;

	p3 = smalloc(10) ; 
	printf("smalloc(10)\n") ; 
	print_sm_containers() ;

    	print_sm_uses() ; 
}
