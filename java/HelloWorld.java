public class HelloWorld {
    public static void main( String[] args ) {
        HelloWorld hw = new HelloWorld();
        System.out.println( hw.hello("Griffin") );
    }

    String hello(String name) {
        if ( name != "" ) {
            return ( "Hello, " + name + "!" );
        } else {
            return "Hello, World!";
        }
    }
}
