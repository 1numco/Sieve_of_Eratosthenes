
import java.util.Scanner;
public class Sieve_of_Eratosthenes {

	public static void main(String[] args)
	{
		int n = 0;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter your limit");
		n=in.nextInt();
        int[] primeArray = new int[n+1];
        for(int i=2;i<=n;i++)
        {
        	primeArray[i]=i;
        }
        
        for (int i = 2; i < Math.sqrt(primeArray.length); i++)
        {
            if (primeArray[i]>0)
            {
                for (int j = i * i; j < primeArray.length; j += i)
                {
                    primeArray[j] = -1;
                }
            }
        }
        
        System.out.println("All prime numbers up to your limit");
        for (int i=2;i<primeArray.length;i++) {
            if (primeArray[i]>0) {
                System.out.print(i+" ");
            }
        }        
    }
}
