#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val,max=0,min=9999;
   char str[20];
   
 
        printf("enter\n");
       while(1) 
        {
        scanf("%s",str);
   
        val = atoi(str);
        int k=strcmp(str,"done");
        if(k==0)
        {   printf("%d\n",max);
            printf("%d\n",min);
            exit(0);
        }
        if(val==0)
            continue;
        else 
        {
            if(val>max)
                max=val;
            if(val<min)
              min=val;
            continue;
        }
            
   }
   

}