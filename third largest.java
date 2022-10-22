public class New {
    private static int findThirdLargest(int[] array) {
        int first, second, third;
        first = second = third = array[0];
        for (int i = 1; i < array.length; i++) {
            if (array[i] > first) {
                third = second;
                second = first;
                first = array[i];
            } else if (array[i] > second) {
                third = second;
                second = array[i];
            } else if (array[i] > third) {
                third = array[i];
            }
        }
        return third;
    }

    public static void main(String[] args) {
        int a[] = {4, 3, 2, 11, 23, 3, 44, 8, 93, 2, 34, 7, 8, 9};
        System.out.println("Third largest number is " + findThirdLargest(a));
    }
}