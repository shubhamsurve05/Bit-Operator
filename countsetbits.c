#include<stdio.h>
void displayBits(int x);
unsigned func(unsigned x,unsigned y,int p,int n);
int main(void)
{
    int p=7,n=4;
    unsigned x=0x23173b4,y=0x557;
    displayBits(x);
    displayBits(y);
    x=func(x,y,p,n);
    displayBits(x);
    return 0;   
}
unsigned func(unsigned x,unsigned y,int p,int n)
{
   unsigned mask=-(-0<<n)<<p-n+1;
   return (x&~mask)|(y&mask);   
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
