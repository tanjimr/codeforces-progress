import java.util.Scanner;

public class cf58A{

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
    String in = sc.next();
    String out = "hello";
    int k= 0;
    int n = in.length();

    for(int i=0; i<n; i++)
    {
        if(k < out.length() && in.charAt(i)==out.charAt(k))
        {
          k++;
        }
           }     
        if(k == out.length())
        System.out.println("YES");
        else
        System.out.println("NO");
    }

    }
