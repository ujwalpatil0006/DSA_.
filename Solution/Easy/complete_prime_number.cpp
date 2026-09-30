class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    bool completePrime(int num) {
        int temp = num;

        long long divisor = 1;
        while (divisor <= temp)
            divisor *= 10;

        divisor /= 10;

        while (divisor > 0) {
            int prefix = temp / divisor;

            if (!isPrime(prefix))
                return false;

            divisor /= 10;
        }

        long long power = 10;

        while (power <= temp) {
            int suffix = temp % power;

            if (!isPrime(suffix))
                return false;

            power *= 10;
        }

        return true;
    }
};
