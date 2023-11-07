import java.util.Scanner;
public class b3052 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int count = 0;
		int [] num = new int[10];
		int [] result = new int[10];		
		
		for(int i=0; i<num.length; i++) {
			num[i] = sc.nextInt();
		}
		
		for(int j =0; j<result.length; j++) {
			result[j] = num[j]%42;
			}
		
		for(int k =0; k<result.length; k++) {
			boolean isduplicate = false;
				for(int x = 0; x<k; x++) {
					if(result[k]==result[x]) {
						isduplicate = true;
						break;
					}
				}
				if(!isduplicate) {
					count++;
				}
				
		}
		System.out.println(count);
		}

}
