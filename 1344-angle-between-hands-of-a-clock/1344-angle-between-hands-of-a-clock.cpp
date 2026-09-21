class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hr = 30*hour+0.5*minutes;
        double mn = 6*minutes;
        double answer = abs(hr-mn);
        return min(answer, 360.0-answer);
    }
};