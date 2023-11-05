import java.util.Scanner;
public class b10813 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int [] arr = new int [N];
		int M = sc.nextInt();
		int x, y;
		
		for(int i =0; i<N; i++) {
			arr[i] = i+1;
		}
		
		for(int j =0; j<M; j++) {
		int I = sc.nextInt();
		int J = sc.nextInt();
		
		x = arr[I-1];
		y = arr[J-1];
		arr[I-1]=y;
		arr[J-1]=x;		
		
		}
		
		for(int k = 0; k<N; k++) {
			System.out.print(arr[k]+" ");
		}
		sc.close();
	}

}
