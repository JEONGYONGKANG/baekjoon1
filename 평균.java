import java.util.Scanner;
public class b1546 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int number = sc.nextInt();
		int [] score = new int[number];
		for(int i =0; i<number; i++) {
			score[i] = sc.nextInt();
			}
		
		int max = score[0];
		for(int j =0; j<number; j++) {
			if(max<score[j]) {
				max = score[j];
				}
		}
		
		double[] arr = new double[number];
		double sum = 0;
		for(int k =0; k<number; k++) {
			arr[k] = (((double)score[k]/max)*100);
			sum = sum + arr[k];
		}
		
		double avg = sum/number;
		System.out.println(avg);
		}

}
