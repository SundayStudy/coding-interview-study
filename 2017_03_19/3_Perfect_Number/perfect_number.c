/* 
 * 완전수는 자기 자신을 제외한 약수를 모두 더한 값이 자기 자신과 일치하는 수를 말한다.
 * 아래의 코드는 N 이하의 자연수 중 완전수를 모두 출력한다.
 *
 * reference : http://codingdojang.com
 * 문제 낸 사람 : 이종서
 * 문제 푼 사람 : 이은서
 */

#include <stdio.h>
#include <math.h>

int main() 
{
    int i, j, sum;
    int N;
    scanf("%d", &N);

    for (i=6; i<=N; i++) {   
        sum = 1;
        for (j=2; j<sqrt(i); j++) {
            if (i%j == 0) {
                sum += j;
                if (i/j != j) {
                    sum += (i/j);
                }
            }
        }
        if (i == sum) {
            printf("%d\n", i);
        }
    }

    return 0;
}
