// Last updated: 9/8/2026, 12:38:35 am
class Solution {
public:
    int addDigits(int num) {
        int temp = num;
        int total = 0;
        int *numb = &temp;
        int *sum = &total;

        if (*numb == 0) return 0;
        if (*numb < 10) return *numb;

        while (*numb >= 10) {
            *sum = 0;
            add(numb, sum);
        }

        return *sum;
    }

    int add(int *numb, int *sum) {
        int num = *numb;
        int digit;
        *sum = 0;
        while (num != 0) {
            digit = num % 10;
            *sum += digit;
            num = num / 10;
        }
        *numb = *sum;
        return *numb;
    }
};