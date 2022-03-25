
class SuperClass{
    public int x=30;
    void display(){
        System.out.println("In SuperClass with value of x as "+x);
    }
}
class SubClass extends SuperClass{
    public int y=10;
    void display(){
        System.out.println("In SubClass with value of x as "+x);
        System.out.println("In SubClass with value of y as "+y);
    }
}

public class Main{
    public static void MethodOveriding(String []args){
        SubClass s=new SubClass();
        s.display();
    }
}