import java.util.*;
public class b10818 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		int[] arr = new int[x];
		
		for(int i =0; i<arr.length; i++) {
			arr[i] = sc.nextInt();
		}
		
		int max = arr[0];
		int min = arr[0];
		
		for(int i = 0; i<arr.length; i++) {
			if(min>arr[i]) {
				min = arr[i];
			}
			
			if(max<arr[i]) {
				max = arr[i];
			}
		}
		
		System.out.println(min+" "+max);
		
		sc.close();
	}
}
