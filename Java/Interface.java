interface Area{
    float pi=3.14F;
    float compute(float x,float y);
}
class Rectangle implements Area{
    public float compute(float x,float y){
        return x*y;
    }
}
class Circle implements Area{
    public float compute(float x,float y){
        return pi *x*x;
    }
}
public  class Interface{
    public static void main(String []args){
        Rectangle rect= new Rectangle();
        Circle cir=new Circle();
        Area area=rect;
        System.out.println(area.compute(5,4));
        area=cir;
        System.out.println(area.compute(5,4));
    }
}