class thisKey{
    int x;
    int getX(){
        return x;
    }
    thisKey(int x){
        this.x=x;
    }
}

public class thisKeyword{
    public static void main(String []args){
        thisKey tk=new thisKey(4);
        System.out.println("Value of x "+tk.getX());;
    }
    
}