import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Deque<Integer> list = new ArrayDeque<>();
        for (int i = 0; i < n; i++) {
            list.addLast(i+1);
        }
        while (list.size()>1) {
            list.removeFirst();
            list.addLast(list.removeFirst());
        }
        System.out.println(list.getFirst());
    }
}
