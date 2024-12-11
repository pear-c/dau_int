import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Main {

    static int N, M;
    static List<List<Integer>> nodes = new ArrayList<>();
    static boolean[] visited;

    static int answer;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine()); // 컴퓨터 개수
        for (int i = 0; i <= N; i++) {
            nodes.add(new ArrayList<>());
        }

        // 그래프 정보 저장
        M = Integer.parseInt(br.readLine());
        for (int i = 0; i < M; i++) {
            String[] inputs = br.readLine().split(" ");
            int v1 = Integer.parseInt(inputs[0]);
            int v2 = Integer.parseInt(inputs[1]);
            nodes.get(v1).add(v2);
            nodes.get(v2).add(v1); // 양방향 그래프
        }

        // 1번 컴퓨터가 오염되었을 때, 전파되는 컴퓨터 개수
        visited = new boolean[N + 1]; // 중복 방문 방지
        dfs(1);

        System.out.println(answer - 1);
    }

    static void dfs(int v) {
        if (visited[v]) { // 이미 방문 했다면
            return;
        }

        visited[v] = true;
        answer++;

        List<Integer> connected = nodes.get(v);
        for (int node : connected) {
            dfs(node);
        }
    }
}
