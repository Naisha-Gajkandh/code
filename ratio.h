#include<stdio.h>

int main(){
    float positive=0;
    float negative=0;
    float zero=0;
    int n,i;
    int a[6];
    printf("please enter 6 number from which you want your ratio:");
    for(n=0;n<6;n++) {
        scanf("%d",&a[n]);}
   for(i=0;i<6;i++){
    if (a[i] < 0 ){
      negative++;
    }
    else if(a[i] > 0){
          positive++;
    }
    else if(a[i] == 0 ){
        zero++;
    }
   }
printf("positive ratio :%f\nnegative ratio: %f\nZero Ratio: %f",positive/6,negative/6,zero/6);
}
