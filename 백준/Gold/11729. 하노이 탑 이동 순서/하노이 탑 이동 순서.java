    import java.util.Scanner;

    public class Main {
        public static void main(String[] args){
            Scanner in=new Scanner(System.in);
            int x=in.nextInt();
            StringBuilder s=new StringBuilder();
            System.out.println(hanoi(x,1,2,3,s));
            System.out.println(s);
        }

        static int hanoi(int x, int a, int b, int c, StringBuilder s){
            if(x==1){
                s.append(a+" "+c+"\n");
                return 1;
            }
            else if(x==2){
                s.append(a+" "+b+"\n");
                s.append(a+" "+c+"\n");
                s.append(b+" "+c+"\n");
                return 3;
            }
            else{
                return hanoi(x-1,a,c,b,s)+hanoi(1,a,b,c,s)+hanoi(x-1,b,a,c,s);
            }
        }
    }
