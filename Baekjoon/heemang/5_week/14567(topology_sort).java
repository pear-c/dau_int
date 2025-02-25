import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 초기값 저장
        String[] inputs = br.readLine().split(" ");
        int n = Integer.parseInt(inputs[0]);
        int m = Integer.parseInt(inputs[1]);

        // 그래프 초기화
        List<List<Integer>> graph = new ArrayList<>();
        for (int i = 0; i <= n; i++) {
            graph.add(new ArrayList<>());
        }

        // 각 노드의 진입 차수 저장
        int[] inDegree = new int[n + 1];

        // 간선 입력
        for (int i = 0; i < m; i++) {
            inputs = br.readLine().split(" ");
            int v1 = Integer.parseInt(inputs[0]);
            int v2 = Integer.parseInt(inputs[1]);
            graph.get(v1).add(v2);
            inDegree[v2]++;
        }

        // 큐에는 차수가 0인 노드가 저장된다.
        int[] level = new int[n + 1];
        Queue<Integer> que = new LinkedList<>();
        for (int i = 1; i <= n; i++) {
            if (inDegree[i] == 0) {
                que.offer(i);
                level[i] = 1;
            }
        }

        while (!que.isEmpty()) {
            Integer v = que.poll();

            // v번 노드가 가리키는 노드와의 간선 제거
            for (int node : graph.get(v)) {
                inDegree[node]--;
                if (inDegree[node] == 0) {
                    que.offer(node);
                    level[node] = level[v] + 1;
                }
            }
        }

        StringBuilder sb = new StringBuilder();
        for (int i = 1; i <= n; i++) {
            sb.append(level[i]).append(" ");
        }
        System.out.println(sb);
    }
}
