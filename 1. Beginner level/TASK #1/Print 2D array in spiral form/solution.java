import java.util.*;

public class solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();

        int[][] arr = new int[m][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        spiral(arr,n,m);
    }
    static void spiral(int[][] arr,int m,int n){
        int i;
        int start_column=0,start_row=0,end_column=n-1,end_row=m-1;
        StringBuilder str = new StringBuilder();

        while(start_row<=end_row && start_column<=end_column){
            for(i=start_column;i<=end_column;i++)
                str.append(arr[start_row][i]+" ");
            start_row++;

            for(i=start_row;i<=end_row;i++)
                str.append(arr[i][end_column]+" ");
            end_column--;

            if(start_row<=end_row){
                for(i=end_column;i>=start_column;i--)
                    str.append(arr[end_row][i]+" ");
                end_row--;
            }
            if(start_column<=start_row){
                for(i=end_row;i>=start_row;i--)
                    str.append(arr[i][start_column]+" ");
                start_column++;
            }
        }
        System.out.println(str);
    }
}
/* Input format : 5 5
    1 2 3 4 5
    6 7 8 9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
    --------------------
    Output format
    1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13
 */