//6. Write a program that show working of different functions of String and StringBufferclasss like setCharAt(), setLength(), append(), insert(), concat( )and equals().

class string{
	public static void main(String[] args) {
		String greet= "Hello World";
		int length= greet.length();
		System.out.println("length : "+ length);

		String f1= "Java ";
		String f2= "Programming";

		//String join= f1.concat(f2);
		System.out.println("joined string: " + f1.concat(f2));

		boolean r1= f1.equals(f2);
		System.out.println("Strings first and second are equal: " + r1);

		String str1= "IBMT";
		System.out.println(str1 + "'s 2nd index char is "+ str1.charAt(2)); 
		//int result = str1.indexOf('T');
		System.out.println("index Of char 'T' : " + str1.indexOf('T'));

		StringBuffer sb = new StringBuffer("Hello");
		sb.append("Java");
		System.out.println(sb);

		sb= new StringBuffer("Hello");
		sb.insert(1, "Java");
		System.out.println(sb);

		sb= new StringBuffer("Hello");
		System.out.println("String length = " + sb.length()+ " and contains = " + sb);

		sb.setLength(3);
		System.out.println("After Stringlenght string = " + sb);

		sb = new StringBuffer("Hello");
		sb.setCharAt(1, 'a');
		System.out.println(sb);

		StringBuffer sb1 = new StringBuffer("hello");
		StringBuffer sb2 = new StringBuffer("hell");
		System.out.println(sb1.equals(sb2));
	}
}
