// althogh it can be done easily but i dont know the syntax which i will lean now
import java.util.Scanner;
public class cf1703A {
    public static void main(String[] args)
    {

    Scanner sc = new Scanner(System.in);

    int t= sc.nextInt();
    sc.nextLine();

    for(int i=0; i<t; i++)
    {
        String s = sc.nextLine();

        if((s.charAt(0)=='y' || s.charAt(0)=='Y') && 
        (s.charAt(1)=='e' || s.charAt(1)=='E')&& 
        (s.charAt(2)=='s' || s.charAt(2)=='S'))
        System.out.println("YES");
        else
        System.out.println("NO");
    }
}
    
}
