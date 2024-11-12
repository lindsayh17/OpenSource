import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class datetime_convert {
    public static void main(String[] args) {
        string dateStr = "2022-03-17 10:45:30";
        // format to year, month, day and time in hours, minutes, seconds
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        // local time format
        LocalDateTime dateObj = LocalDateTime.parse(dateStr, formatter);
        String formattedDate = dateObj.format(DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss"));
        // print formatted date
        System.out.print(formattedDate);
    }
}
