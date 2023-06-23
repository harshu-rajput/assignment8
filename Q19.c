#include<stdio.h>
int main(){
 int i,j;

 for(i=1;i<4;i++){
    for(j=1;j<=10;j++){

        if( j>=(4-i) && j<=(6+i)){
             printf("* ");
        }else{
             printf("  ");
        }
    }
 

                                for(j=11;j<=19;j++){

                                     if( j>=(14-i) && j<=(16+i)){
                                          printf("* ");
                                        }else{
                                       printf("  ");
                                        }
                                        }
                                       printf("\n");
}


                                      




 for(i=4;i<=13;i++){
    for(j=1;j<=19;j++){

        if( j>=(i-3) && j<=(23-i)){
             printf("* ");
        }else{
             printf("  ");
        }
    }
    printf("\n");
 }
return 0;
}