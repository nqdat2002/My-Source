package DSA.QuyHoachDong;

import java.math.BigInteger;
import java.util.Scanner;

public class DSA05014 {
    public static BigInteger factorialHavingLargeResult(int n) {
        BigInteger result = BigInteger.ONE;
        for (int i = 2; i <= n; i++)
            result = result.multiply(BigInteger.valueOf(i));
        return result;
    }
    public static void main(String [] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t > 0){
            int n = ip.nextInt();
            BigInteger x = factorialHavingLargeResult(n);
            BigInteger y = factorialHavingLargeResult(2 * n);
            BigInteger z = factorialHavingLargeResult(n + 1);
            BigInteger mau = x.multiply(z);
            System.out.println(y.divide(mau));
            t--;
        }
        ip.close();
    }
}