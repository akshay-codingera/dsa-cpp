import java.io.*;
import java.net.*;

public class Client {
public static void main(String[] args) {
try {
Socket socket = new Socket("127.0.0.1", 5000);

        PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
        BufferedReader in = new BufferedReader(
            new InputStreamReader(socket.getInputStream())
        );

        out.println("Hello Server!");

        String response = in.readLine();
        System.out.println("Server says: " + response);

        socket.close();
    } catch (Exception e) {
        e.printStackTrace();
    }
}

}