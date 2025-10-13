import java.util.Scanner;
public class cf996A {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int d = sc.nextInt();

        int[] bills = {100,20,10,5,1};
        int count = 0;

        for(int x : bills)
        {
            count += d/x;
            d %= x;
            
        }

        System.out.println(count);


    }
    
}
