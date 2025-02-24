#include <stdio.h>
void ParamNoReturn(int i1){
    int adding = + i1 ;
    if(adding <=10 && adding !=0){
        adding +=1;
    }
    else{
        printf("Go back!");
    }
}
int main() {
    int val;
    printf("Enter:");
    scanf("%i",&val);
    ParamNoReturn(val);
    return 0;
}