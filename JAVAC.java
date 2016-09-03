import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str,ans="";
        int ui,f,len,t;
        while( ( str=br.readLine() ) != null ){
            len=str.trim().length();
            if(len==0){
                System.out.println("Error!");
                continue;
            }
            f=0;
            if(str.contains("_")){ //c++
               ui = str.indexOf("_");
               if( ui==0  ){
                   f=1;
               } else{
                   for(int i=0;i<len;i++){
                       if( Character.isUpperCase( str.charAt(i) ) ){
                           f=1;
                           break;
                       }
                   }
                    if(f!=1){
                    while(ui>0){
                        if(ui==len-1){
                            f=1;
                            break;
                        }
                        str = str.substring(0, ui) + (""+str.charAt(ui+1)).toUpperCase() + str.substring(ui+2,len);
                        len--;
                        t=ui;
                        ui=str.indexOf("_");
                        if(ui==t){
                            f=1;
                            break;
                        }
                    }}
               }
               if(f==0) System.out.println(str);
               else System.out.println("Error!");
            } else{ //Java
                ans="";
                if( Character.isUpperCase( str.charAt(0) ) ){
                    f=1;
                } else{
                    for(int i=0;i<len;i++){
                        if( Character.isUpperCase(str.charAt(i)) ){
                            ans+="_";
                        }
                        ans += (""+str.charAt(i)).toLowerCase();
                    }
                }
                if(f==0) System.out.println(ans);
                else System.out.println("Error!");
                
            }
        }
    }
}
