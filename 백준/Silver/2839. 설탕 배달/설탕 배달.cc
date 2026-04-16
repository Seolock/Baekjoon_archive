# include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int a,b;
    int flag=0;
    a=x/5;
    if(x%5==0) b=0;
    else if(x%5==3) b=1;
    else{
        for(int i=1;i<=a;i++){
            if((i*5+x%5)%3==0){
                flag=1;
                a-=i;
                b=(i*5+x%5)/3;
                break;
            } 
        }
        if(flag==0){
            printf("-1");
            return 0;
        }
    }
    printf("%d",a+b);
    return 0;
}