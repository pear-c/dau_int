import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringBuilder sb = new StringBuilder();
        while (true) {
            String input = br.readLine();

            // 아무 것도 입력되지 않으면 종료
            if (input == null) {
                break;
            }

            // s와 t 분리
            // s : split[0], t : split[1]
            String[] split = input.split(" ");

            // t의 문자 일부를 제거하여 s를 만들 수 있는가?
            int sIdx = 0;
            boolean flag = true;
            for (char find : split[0].toCharArray()) {
                int idx = split[1].substring(sIdx).indexOf(find);

                // 문자가 존재하지 않으면 만들 수가 없다.
                if (idx == -1) {
                    flag = false;
                    break;
                }

                // 찾은 문자 이후부터 탐색을 진행한다.
                sIdx += idx + 1;
            }
            
            if (flag) {
                sb.append("Yes\n");
            } else {
                sb.append("No\n");
            }
        }

        System.out.println(sb);
    }
}
