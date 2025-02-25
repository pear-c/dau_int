import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        long s = Long.parseLong(br.readLine());

        Stack<Long> picked = new Stack<>(); // 선택한 서로 다른 N개의 자연수
        long currentSum = 0L; // 선택한 숫자들의 합

        // 자연수 1부터 시작하여 차례대로 더한다.
        for (long num = 1; num <= s; num++) {
            // 현재 숫자를 일단 선택한다.
            picked.push(num);
            currentSum += num;

            if (currentSum == s) { // 선택한 숫자들의 합이 S라면 종료
                break;
            } else if (currentSum > s) { // 숫자들의 합 > S
                // 두 개의 숫자 제거
                currentSum -= picked.pop();
                currentSum -= picked.pop();

                // loop를 다시 돌 때, 현재 숫자를 다시 선택한다.
                num -= 1;
            }
        }

        System.out.println(picked.size());
    }
}
