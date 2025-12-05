#include <stdio.h>
#include <stdlib.h>

int fib(int a){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    else{
        return fib(a-1)+fib(a-2);
    }

}

int main()
{
    int i,result;
    printf("Please enter the number: ");
    scanf("%d", &i);
    result=0;
    result = fib(i);
    printf("%d",result);




    return 0;
}
