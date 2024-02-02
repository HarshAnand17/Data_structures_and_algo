class rec{
    int func(int n){
        int r;
        r=func(n-1);
        return r;
    }
}
class test{
    // public void m1(int i, float f){
    //     System.out.println("int float method");

    // }
    // public void m1(float f, int i){
    //     System.out.println("float int method");
    // }
    // public static void main(String[] args) {
    //    test s= new test();
    //    s.m1(20, 20);
    // }
    
    public static void main(String[] args) {
        rec a=new rec();
        System.out.println(a.func(12));
    }
}