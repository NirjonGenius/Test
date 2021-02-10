#include "stdio.h"
#include "string.h"
#include "stdlib.h"
void c(char *b) {
    int over = 0,ball = 0;

    for(int i = 0; b[i]!='\0'; i++) {

        ball++;
        if(b[i] == 'N') {
            ball--;
        }
        else if(b[i] == 'D') {
            ball-=1;

        }
        else if(b[i] == 'W') {
            ball-=1;

        }


    }

    over=ball/6;
    if(over)  {
        ball-=over*6;
    }
    if(over==0) {
        if(ball < 1) {
            printf("%d BALLS\n",ball);
        }
        else if(ball == 1) {

            printf("%d BALL\n",ball);

        }
    }
    else {
        if(over == 1 && ball>1) {
            printf("%d OVER %d BALLS\n",over,ball);
        }
        else if(over == 1 && ball==1) {
            printf("%d OVER %d BALL\n",over,ball);
        }
        else if(over>1 && ball == 1) {
            printf("%d OVERS %d BALL\n",over,ball);
        }
        else if(over>1 && ball>1) {
            printf("%d OVERS %d BALLS\n",over,ball);
        }
    }

}
int main() {
    int n;

    scanf("%d",&n);
    char d[n][100];

    getchar();
    for(int j =0 ; j<n; j++) {

        scanf ("%[^\n]%*c",d[j]);

    }
    for(int j =0 ; j<n; j++) {

        c(&d[j][0]);

    }


}
