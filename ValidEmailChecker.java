import java.util.regex.*;
class ValidEmailChecker
{
    public static void main(String[] args)
    {
        String email="xyz@xyz.xyz";
        
        Pattern p=Pattern.compile("[a-zA-Z0-9][a-zA-Z0-9._]*@[a-zA-Z0-9]+([.][a-zA-Z]+)+");
        
        Matcher m=p.matcher(email);
        if(m.find()&&m.group().equals(email))
        {
            System.out.println("Valid Email ID");
        }
        else
        {
            System.out.println("Invalid Email ID");
        }


    }
}
 
