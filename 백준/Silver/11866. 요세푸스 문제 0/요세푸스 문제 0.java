import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        k--;
        List<Integer> list=new ArrayList<>();
        for(int i=1;i<=n;i++) list.add(i);
        int p=0;
        List<Integer> answer=new ArrayList<>();
        while(list.size()!=1){
            p+=k;
            while(p>list.size()-1) p-=list.size();
            answer.add(list.get(p));
            list.remove(p);
        }
        System.out.print("<");
        for(Integer i:answer) System.out.print(i+", ");
        System.out.print(list.get(0));
        System.out.print(">");

    }
}

