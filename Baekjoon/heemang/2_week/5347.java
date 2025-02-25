import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        while (n-- > 0) {
            String[] splits = br.readLine().split(" ");
            int a = Integer.parseInt(splits[0]);
            int b = Integer.parseInt(splits[1]);

            long result = 1;
            while (true) {
                int gcd = gcd(a, b);
                if (gcd == 1) { // 두 수가 서로소이면 종료
                    result *= (long) a * b;
                    break;
                }
                result *= gcd;
                a /= gcd;
                b /= gcd;
            }

            System.out.println(result);
        }
    }

    static int gcd(int a, int b) {
        if (b == 0) {
            return a; // a는 두 수의 최소 공배수
        }
        return gcd(b, a % b);
    }
}
