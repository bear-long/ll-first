#include<iostream> 	       
#define uchar unsigned char
#define uint unsigned int 
void delay()
{
uchar m,n,s;
for(m=20;m>0;m--)
for(n=20;n>0;n--)
for(s=248;s>0;s--);
}

{
	while(1)  
	{
	 LED=1;	   
	 if(DOUT==0)
	 {
    	delay();
		if(DOUT==0)
	    {
		 LED=0;	   
		}
	 }
	}
}	