import java.util.HashMap;

public class Programmers {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String [] alphabet = { "A", "B", "C" ,"A"}; 
		
		HashMap<String, Integer> hm = new HashMap<>(); 
		for(String key : alphabet) {
			hm.put(key, hm.getOrDefault(key, 0) + 1); 
			System.out.println(hm.getOrDefault(key, 0) + 1);
		}
		System.out.println("결과 : " + hm);
	}
}
