import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        Stack<String> stack = new Stack<>();
        StringBuilder sb = new StringBuilder();
        while (n-- > 0) {
            String input = br.readLine();

            if (input.startsWith("push")) {
                stack.push(input.split(" ")[1]);
                continue;
            }

            if (stack.isEmpty()) {
                switch (input) {
                    case "pop":
                    case "top":
                        sb.append(-1).append("\n");
                        break;
                    case "size":
                        sb.append(0).append("\n");
                        break;
                    default:
                        sb.append(1).append("\n");
                }
                continue;
            }

            switch (input) {
                case "pop":
                    sb.append(stack.pop()).append("\n");
                    break;
                case "size":
                    sb.append(stack.size()).append("\n");
                    break;
                case "empty":
                    sb.append(0).append("\n");
                    break;
                default:
                    sb.append(stack.peek()).append("\n");
            }
        }

        System.out.print(sb);
    }
}
