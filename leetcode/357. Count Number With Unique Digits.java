package practice;

public class CountNumberWithUniqueDigits {

    public static void main(String[] args) {
        System.out.println(countNumbersWithUniqueDigits(1));
        System.out.println(countNumbersWithUniqueDigits(5));
    }

    public static int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        if (n == 1) return 10;

        int total = 10, current = 9, multiplier = 10;

        for (int i = 0; i < n-1; i++) {
            multiplier = Math.max(0, --multiplier);
            current = current * multiplier;
            total += current;
        }

        return total;
    }

}
