/*
Design a class to represent a bank account.Include the following member :
Data member:
Name of the depositor
Type of account
Account Number
Balance amount inthe account

Method:
To assign initial values
Deposit amoubt]
To withdraw an amount after checking balance
To display the name and balance

*/
class BankAccount{
	String name;
	String accountType;
	int accountNumber;
	float balanceAmount;
	BankAccount(String name,String accountType,int accountNumber){
		this.name= name;
		this.accountType=accountType;
		this.accountNumber=accountNumber;
		this.balanceAmount=0;
	}
	void depositMoney(float amount){
		balanceAmount+=amount;
		System.out.println("Amount has been deposited .Total Amount "+balanceAmount);
	}
	
	boolean checkBalance(float amount){
		if(amount>balanceAmount){
			return false;
		}
		return true;
	}
	
	void withdraw(float val){
		if(checkBalance(val)){
			balanceAmount=balanceAmount-val;
			System.out.println("Amount has been withdrawn .Curr Balance "+balanceAmount);
		}else{
			System.out.println("Insufficient Balance "+balanceAmount);
		}
	}
	void getInfo(){
			System.out.println("Name "+name);
			System.out.println("AccountType "+accountType);
			System.out.println("AccountNumber "+accountNumber);
			System.out.println("Balance Amount "+balanceAmount);
	}
	
}
public class BankBalance{
	public static void main(String args[]){
		BankAccount user1=new BankAccount("Sushil","Personal Account",1234567890);
		user1.depositMoney(500);
		user1.depositMoney(500);
		user1.depositMoney(500);
		user1.withdraw(1000);							
		user1.depositMoney(500);
		user1.depositMoney(500);
		user1.getInfo();
	}
}













