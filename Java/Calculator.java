import java.util.*;
public void Calculator{
	public static void main(String[] args){
		System.out.println("Enter  a operation ");
		Scanner sc=new Scanner(Sytem.in);
		char ch = sc.next().charAt(0);
		System.out.println("Enter a and b ");
		double a = sc.nextDouble();
		double b = sc.nextDouble();
		double res;
		switch(ch){
		
		case '+':
			res=a+b;
			break;
		case '-':
			res=a-b;
			break;
		case '*':
			res=a*b;
			break;
		case '/':
			res=a/b;
			break;
		case '%':
			res=a%b;
			break;
		default:
		break;
		}
		System.out.println("Result is " + res);
	}
}