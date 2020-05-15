#include<stdio.h>
void displayBits(int x);
int main(void)
{
  unsigned n=140;
  displayBits(n);
  n=n&(n-1);
  displayBits(n);
  return 0;  
}
void displayBits( int value )
	   { 
		         int c = 0; /* counter */
			    
			    /* define displayMask and left shift 31 bits */
			       int displayMask = 1 << 31; //binary value: 10000000 00000000 00000000 00000000
			          
			             printf( "%10d = ", value );
				        
				        /* loop through bits */ 
				           for ( c = 1; c <= 32; c++ ) { 
						            if(value & displayMask){
								                printf( "1" ); 
										         }
							             else{
									                 printf( "0" );
											          }
								              value <<= 1; /* shift value left by 1 */   
									               value = value << 1;
									                     
									                              if ( c % 8 == 0 ) { /* output space after 8 bits */
									                                          printf( " " );
									                                                   } /* end if */
									                                                         
									                                                               } /* end for */
									                                                                  
									                                                                        printf( "\n" );
									                                                                           }
