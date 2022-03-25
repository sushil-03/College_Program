

class Base1{
	 Base1(){
	System.out.println("In Base class");
	}
	 Base1(int x){
	System.out.println("In Base class with value of x as "+x);
	}
}
class Derived extends Base1{
	 Derived(){
	System.out.println("In Derived class");
	}
	 Derived(int x,int y){
	    super(x);
	System.out.println("In Derived class with value of y as "+y);
	}
}
class childOfD extends Derived{
	 childOfD(){
	System.out.println("In childOfD class");
	}
	 childOfD(int x,int y,int z){
	   super(x,y);
	System.out.println("In childOfD class with value of z as "+z);
	}
}
public class Main
{
	public static void constructor_overloading(String[] args) {
	    Base1 b1 = new Base1();
    	System.out.println("---------------------------------------- ");
	    Derived d1= new Derived();
    	System.out.println("---------------------------------------- ");
    	Derived d2= new Derived(1,2);
    	System.out.println("---------------------------------------- ");
    	childOfD cd =new childOfD();
    	System.out.println("---------------------------------------- ");
    	childOfD cd1= new childOfD(8,9,5);

	}
}