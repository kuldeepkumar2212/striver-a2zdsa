public class pattern10 {
    public static void nStarTriangle(int n) {
        // Write your code here
        for(int i=0;i<2*n-1;i++){
            int stars =i+1;
            if(i>=n-1){
                stars = 2*n -i-1;
            }
            for(int j=0;j<stars;j++){
                System.out.print("*");
            }
            System.out.println("");
        } 
    }
}