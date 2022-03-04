public class Floyd {
	public static void main(String []args){
		int n=10;
		int k=1;
		int row=1;
		while(k<=n){
			for(int i=0;i<row;i++){
				System.out.print(k + " ");
				k++;
			}
			row++;
			System.out.println("");
		}
		
	}
}