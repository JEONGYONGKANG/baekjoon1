import java.util.Scanner;
public class b5597 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i,j;
		int [] num = new int [30];
		
		
		for(i =0; i<28; i++) {
			int attendance = sc.nextInt();
			
			num [attendance-1] = 1;
			}
		
		
		for(j=0; j<30; j++) {
			if(num[j]==0) {
				System.out.println(j+1);
			}
		}
}

}
