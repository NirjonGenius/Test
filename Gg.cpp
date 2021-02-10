#include "stdio.h"
#include "string.h"
#include "stdlib.h"
void c(char *b) {
    
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
