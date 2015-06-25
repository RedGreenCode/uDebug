import java.io.*;
import java.util.*;

public class GenerateInput
{
	private static final Random _random = new Random();

	public static void main(String args[])
	{
		int numCases = 2;
		System.out.println(numCases);
		for (int i=0; i<numCases; i++) {
			int k = 10;
			System.out.println(k);
			for (int j=0; j<k; j++) {
				int ch = _random.nextInt(223)+32;
				int value = _random.nextInt(1000);
				System.out.println((char)ch + " " + value);
			}
			int m = 10;
			System.out.println(m);
			for (int j=0; j<m; j++) {
				int len = 10;
				for (int z=0; z<len; z++) {
				int ch = _random.nextInt(223)+32;
					System.out.print((char)ch);
				}
				System.out.println();
			}
		}
	}
}
