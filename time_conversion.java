import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    /*
     * Complete the timeConversion function below.
     */
    static String timeConversion(String s) {
        String[] timesplit=s.split(":");
        int hrs=Integer.parseInt(timesplit[0]);
        String meridian =timesplit[2];
        String hrstring="";
        if(meridian.contains("AM"))
        {
            if (hrs==12)
                 hrstring="00";
            else
                 hrstring=timesplit[0];
        }
        if(meridian.contains("PM"))
        {
            hrs=hrs+12;
            if(hrs==24)
            {
                 hrstring="12";
            }
            else
                 hrstring=Integer.toString(hrs);

        }
        return hrstring+":"+timesplit[1]+":"+timesplit[2].substring(0,2);

    }

    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scan.nextLine();

        String result = timeConversion(s);

        bw.write(result);
        bw.newLine();

        bw.close();
    }
}
