
package cp;
import java.util.*;
public class Hello {

	public static void main(String[] args) {
		int n, a, b, count = 0;
		List<Integer> v1 = new ArrayList<Integer>();
		List<Integer> v2 = new ArrayList<Integer>();
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		while(n-- > 0) {
			a = sc.nextInt();
			b = sc.nextInt();
			v1.add(a);
			v2.add(b);
		}
		for(int i : v1) {
			for(int j : v2) {
				if(i == j) count++;
			}
		}
		System.out.println(count);
	}
}
