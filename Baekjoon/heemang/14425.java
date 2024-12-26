import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.Set;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] inputs = br.readLine().split(" ");
        int N = Integer.parseInt(inputs[0]);
        int M = Integer.parseInt(inputs[1]);

        // N개의 입력 문자열을 저장한다.
        Set<String> set = new HashSet<>();
        while (N-- > 0) {
            set.add(br.readLine());
        }

        // M번을 입력받으면서, set에 존재하는 문자열인지 확인한다.
        int count = 0;
        while (M-- > 0) {
            count += set.contains(br.readLine()) ? 1 : 0;
        }

        System.out.println(count);
    }
}
