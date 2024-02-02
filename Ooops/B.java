
    class A{
        int i;
        public void display(){
            System.out.println(i);
            System.out.println("call hua");
        }
    }
    class B extends A{
        int j;
        public void display(){
            System.out.println(j);
            System.out.println("ye wala call hua h");
        }
    
    public static void main(String[] args) {
        B obj2 = new B();
        obj2.i=1;
        obj2.j=2;
        A r;
        r = obj2;
        r.display();

        System.out.println((byte)(555));
    }
}

