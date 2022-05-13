//7. Write program to create a "distance" class with methods where distance is computed in terms of feet and inches, how to create objects of a class and to see the use of this pointer

import java.util.*;

class Distance {
		private int feet;
		private int inches;

		public void getDistance() {
			Scanner sc = new Scanner(System.in);
			System.out.print("Enter feet : ");
			feet = sc.nextInt();
			System.out.print("Enter inches : ");
			inches = sc.nextInt();
			public void showDistance() {
				System.out.println("feet:" + feet + "\t inches:" + inches);
			}
			public void addDistance(Distance D1, Distance D2) {
				inches = D1.inches + D2.inches;
				feet = D1.feet + D2.feet(inches/12);

			}
		}
	}
