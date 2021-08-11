#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    char num[1000];
    scanf("%s",&num);
    int a=48,i;
    while(a<58)
    {
        int c=0;
        for(i=0;num[i]!='\0';i++)
        {
            if(num[i]==a)
            c++;
        
        }
        printf("%d ",c);
        a++;
    }
    return 0;
        
    }
