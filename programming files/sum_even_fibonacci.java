public class sum_even_fibonacci {
    public static void main(String[] args) {
        int a = 0, b = 1;
        int sumEven = 0;
        //if b is even add it to total sum 
        while (b < 4000000) {
            if (b % 2 == 1) {
                sumEven += b;
            }
            //add the current integer to the previous integer
            int temp = b;
            b = a + b;
            a = temp;
        }
        //print out sumEven 
        System.out.println(sumEven);
    }
}

// answer should be 4613732
