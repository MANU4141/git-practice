#include <stdio.h>

struct Stock 
{
    char name[20];                  
    float earnings_per_share;       
    float price_earnings_ratio;     
};

int main() 
{
    struct Stock stocks[5];          
    float anticipated_price;         
    
    for (int i = 0; i < 5; i++) 
    {
        printf("주식 %d의 이름을 입력하세요: ", i + 1);
        scanf("%s", stocks[i].name);

        printf("주식 %s의 예상 주당 순이익을 입력하세요: ", stocks[i].name);
        scanf("%f", &stocks[i].earnings_per_share);

        printf("주식 %s의 예상 주가수익비율(P/E ratio)을 입력하세요: ", stocks[i].name);
        scanf("%f", &stocks[i].price_earnings_ratio);

        anticipated_price = stocks[i].earnings_per_share * stocks[i].price_earnings_ratio;

        printf("주식 %s의 예상 주가는: $%.2f\n\n", stocks[i].name, anticipated_price);
    }
    return 0;
}