interface Bicycle{
    void applyBrake(int dec);
    void speedUp(int inc);
}
class AvonBicycle implements Bicycle{
    int speed=10;
    public void speedUp(int inc){
        speed+=inc;
    }
    public void applyBrake(int dec){
        speed-=dec;
    }
    public void showSpeed(){
        System.out.println("Current Speed is "+speed);
    }
} 
public class Main{
    public static void main(String []args){
        Bicycle cycle;
        AvonBicycle a1=new AvonBicycle();
        cycle=a1;
        a1.speedUp(10);
        a1.speedUp(20);
        a1.speedUp(30);
        a1.applyBrake(10);
        a1.showSpeed();
    }
}