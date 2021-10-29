package practice;

public class CountPrimes {

    public int countPrimes(int n) {
        int[] array = new int[n];
        if (n < 3) return 0;
        int answer = 0;
        array[0] = 1;
        array[1] = 1;

        for (int i = 2; i < n; i++) {
            if (array[i] != 0) continue;
            int j = i * 2;
            while (j < n) {
                array[j] = 1;
                j += i;
            }
        }

        for (int i = 2; i < n; i++) {
            if (array[i] == 0) answer++;
        }

        return answer;
    }

}
