#include <stdio.h>

int main()
{
    int x;
    int result[8];
    scanf("%d", &x);
    int y = x;
    // 負數的話則取一的補數，轉成正數處理
    if (y < 0)
        x = ~x;
    // 實踐二進位，倒置放入陣列
    for (int i = 0; i < 8; i++)
    {
        result[7 - i] = x % 2;
        x /= 2;
    }
    // 再轉回來
    if (y < 0)
    {
        for (int i = 0; i < 8; i++)
        {
            if (result[i] == 0)
                result[i] = 1;
            else
                result[i] = 0;
        }
    }
    // 輸出，最後換行
    for (int i = 0; i < 8; i++)
        printf("%d", result[i]);
    printf("\n");

    return 0;
}