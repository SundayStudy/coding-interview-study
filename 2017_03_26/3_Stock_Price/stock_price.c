/* stock_price.c - 전날의 주식의 가격이 시간순서대로 배열로 주어진다.
 * 단 한 번의 구입, 판매로 최대로 얻을 수 있는 이익은 얼마인지 찾아야 한다.
 * 시간복잡도 : O(n), 공간 복잡도 : O(1)
 */

#include <stdio.h>
#include <math.h>

int main() {
    int i;
    int yesterday_stock_price[] = {1, 2, 3, 4, 5, 3};
    
    if (sizeof(yesterday_stock_price) / sizeof(int) < 2) {
        printf("less then 2 points : not available\n");
        return 0;
    }

    int minimum_price = yesterday_stock_price[0];
    int current_profit;
    int maximum_profit = yesterday_stock_price[1] - yesterday_stock_price[0];

    for (i=1; i<sizeof(yesterday_stock_price) / sizeof(i); i++) {
        minimum_price = min(minimum_price, yesterday_stock_price[i]);
        current_profit = yesterday_stock_price[i] - minimum_price;

        if (maximum_profit < current_profit) {
            maximum_profit = current_profit;
        }
    }

    return maximum_profit;
}
        
