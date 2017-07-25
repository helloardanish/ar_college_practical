import java.util.Scanner;

public class JavaProgram
{
   public static void main(String args[])
   {
       int size, i, j, temp;
       int arr[] = new int[50];
       Scanner scan = new Scanner(System.in);
	   
       System.out.print("Enter Size of the array : ");
       size = scan.nextInt();
	   
       System.out.print("Enter elements in Array! : ");
       for(i=0; i<size; i++)
       {
           arr[i] = scan.nextInt();
       }
	   
       System.out.print("Processing............\n");
       for(i=0; i<size; i++)
       {
           for(j=i+1; j<size; j++)
           {
               if(arr[i] > arr[j])
               {
                   temp = arr[i];
                   arr[i] = arr[j];
                   arr[j] = temp;
               }
           }
       }
	   
       System.out.print("Array after sorting is :\n");
       for(i=0; i<size; i++)
       {
           System.out.print(arr[i]+ "  ");
       }
   }
}
