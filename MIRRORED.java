import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
class Main1 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s;
        System.out.println("Ready");
        do{
            s = br.readLine().trim();
            if(s.equals("")) break;
            char a = s.charAt(0) , b = s.charAt(1);
            if( (a=='b' && b=='d') || (a=='d' && b=='b') || (a=='p' && b=='q') || (a=='q' && b=='p') )
                System.out.println("Mirrored pair");
            else
                System.out.println("Ordinary pair");
        } while(true);
        
    }
}