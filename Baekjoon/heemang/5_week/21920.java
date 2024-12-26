import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // n개의 숫자들을 저장한다.
        int n = Integer.parseInt(br.readLine());
        int[] nums = new int[n];
        String[] inputs = br.readLine().split(" ");
        for (int i = 0; i < n; i++) {
            nums[i] = Integer.parseInt(inputs[i]);
        }

        int x = Integer.parseInt(br.readLine());

        // n개의 숫자들과 x가 서로소인지 확인한다.
        int count = 0; // 서로소 개수
        double sum = 0d; // 서로소인 숫자들의 합
        for (int num : nums) {
            int result = gcd(num, x);
            if (result == 1) {
                sum += num;
                count++;
            }
        }

        System.out.println(sum / count);
    }

    // 두 수(a, b)의 최대 공약수가 1인지 반환
    static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
}
