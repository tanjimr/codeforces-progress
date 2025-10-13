import java.util.Scanner;
public class cf1829A {

    public static void main(String[] args) 
    {
    
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    sc.nextLine(); 


  
    String in ;
    String ref = "codeforces";

    for(int i=0; i<n; i++)
    {
          int count = 0;
        in = sc.nextLine();



        for(int j=0; j<10;j++)
        if(in.charAt(j)!=ref.charAt(j))
        {
            count++;
        }
        
        System.out.println(count);
    
    }

     
    

    }
    
}



