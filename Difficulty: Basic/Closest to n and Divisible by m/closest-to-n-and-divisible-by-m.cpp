class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int lower = (n / m) * m;
        int upper;

        if (n > 0)
            upper = lower + abs(m);
        else
            upper = lower - abs(m);

        int d1 = abs(n - lower);
        int d2 = abs(n - upper);

        if (d1 < d2)
            return lower;
        else if (d2 < d1)
            return upper;
        else
            return max(abs(lower), abs(upper)) == abs(lower) ? lower : upper;
    }
};