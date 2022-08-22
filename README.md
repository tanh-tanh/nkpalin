# nkpalin
tìm chuỗi đối xứng.
## thuật toán
>Ý tưởng:
>giá trị đầu: 
    dp[i][i]= 1;
    dp[i][i+1]= 1 +(s[i]==s[i+1]);
>quy hoạch động với công thức:
    dp[i][j] = max(dp[i][j], 2+ dp[i+1][j-1]) (nếu s[i]==s[j]) 
(với dp[i][j] là chiều dài xâu đối xứng dài nhất từ i đến j)
>*giải thích vì sao dp[i+1][j-1]: đây là chiều dài xâu đối xứng dài nhất từ i+1 đến j-1 tức là chiều dài xâu đối xứng dài nhất giữa i đến j ko tính i j.

## truy vết
Bắt đầu từ dp[0][n-1] (lúc này giá trị đầu của biến l = 0 và r= n-1)
>nếu l = r thì sẽ in ra vị trí s[l] và két thúc chương trình.

>nếu s[l] = s[r] thì in ra vị trí s[l]  sau đó truy vết l+1, r-1 sau đó in ra s[r] và kết thúc chương trình

>nếu dp[l][r] = dp[l+1][r] thì truy vết l+1, r nếu ko thì truy vết l, r-1
![truy vết](https://i.imgur.com/zbizube.png)
