

#include<stdio.h>

int bmod(int a,int b,int m)
{
if(b==0)
return 1;
else if(b%2 == 0){
int x=bmod(a,b/2,m);
x=(x*x)%m;
return x;
}
else return ((a % m ) * bmod(a,b-1,m)) % m;

}

int main()
{
int B,P,M;

while(scanf(“%d”,&B) != EOF) {
scanf(“%d %d”,&P,&M);
printf(“%d\n”,bmod(B,P,M));
}
return 0;

}
