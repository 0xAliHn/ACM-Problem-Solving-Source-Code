

#include<stdio.h>

int R, C, I, c, r ;
int L,O,N,S;
char str, inst[50001];
int count;
char NA[105][105];

void updateDir(char dir) {
if (dir == ‘D’) {
if (L) {
S = 1;
O = N = L = 0;
} else if (S) {
O = 1;
L = N = S = 0;
} else if (O) {
N = 1;
O = L = S = 0;
} else if (N) {
L = 1;
O = N = S = 0;
}
} else if (dir == ‘E’) {
if (O) {
S = 1;
O = N = L = 0;
} else if (N) {
O = 1;
L = N = S = 0;
} else if (L) {
N = 1;
O = L = S = 0;
} else if (S) {
L = 1;
O = N = S = 0;
}
}

}

void find(char charV) {
switch (charV) {
case ‘D':
updateDir(‘D’);
break;
case ‘E':
updateDir(‘E’);
break;
case ‘F':
if (L) {
if (NA[r][c + 1] == ‘.’) {
c++;
} else if (NA[r][c + 1] == ‘*’) {
c++;
count++;
//printf(“L= %d %d\n”,r,c);
NA[r][c] = ‘.';
} else if (NA[r][c + 1] == ‘#’)
break;
} else if (S) {
if (NA[r + 1][c] == ‘.’) {
r++;
} else if (NA[r + 1][c] == ‘*’) {
r++;
count++;
//printf(“S= %d %d\n”,r,c);
NA[r][c] = ‘.';
} else if (NA[r + 1][c] == ‘#’)
break;
} else if (O) {
if (c>0 && NA[r][c – 1] == ‘.’) {
c–;
} else if (c>0 && NA[r][c – 1] == ‘*’) {
c–;
count++;
//printf(“O= %d %d\n”,r,c);
NA[r][c] = ‘.';
} else if (c>0 && NA[r][c – 1] == ‘#’)
break;
} else if (N) {
if (NA[r – 1][c] == ‘.’) {
r–;
} else if (NA[r – 1][c] == ‘*’) {
r–;
count++;
//printf(“N= %d %d\n”,r,c);
NA[r][c] = ‘.';
} else if (NA[r – 1][c] == ‘#’)
break;
}
break;

}

}

int main()
{
while(scanf(“%d %d %d”,&R,&C,&I)==3)
{
if(R == 0 && C == 0 && I == 0)
break;

for(int i=1;i<105;i++)
for(int j=0;j<105;j++)
{
NA[i][j]=0;

}

count = 0;
for(int i=1;i<=R;i++){
scanf(“%s”,NA[i]);
}

scanf(“%s”,inst);

for(int i=1;i<=R;i++)
{
for(int j=0;j<C;j++)
{

if(NA[i][j]==’N’ || NA[i][j]==’S’ || NA[i][j]==’L’ || NA[i][j]==’O’)
{
r = i;
c = j;
}
}
}

char d = NA[r][c];
NA[r][c] = ‘.';
if (d == ‘L’) {
L = 1;
O = N = S = 0;
} else if (d == ‘N’) {
N = 1;
O = L = S = 0;
} else if (d == ‘S’) {
S = 1;
O = N = L = 0;
} else if (d == ‘O’) {
O = 1;
L = N = S = 0;
}

for(int i=0;i<I;i++){
find(inst[i]);
}

printf(“%d\n”,count);
}
return 0;
}
