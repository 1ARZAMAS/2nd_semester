import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Введите количество чисел: ");
        int n = scanner.nextInt();

        System.out.print("Введите числа через Enter: ");
        int count = 0;
        for (int i = 0; i < n; i++) {
            int num = scanner.nextInt();
            if (isPrime(num)) {
                count++;
            }
        }

        System.out.println("Количество простых чисел: " + count);
        scanner.close();
    }

    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}