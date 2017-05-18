public class Kata
{
  public static int[] squareOrSquareRoot(int[] A)
  {
    int len=A.length;
    int B[] = new int[len];
    
    for(int i=0;i<len;i++){
      double b,b2;
      int x=A[i];
      
      b=Math.sqrt(x);
      b2=Math.ceil(b);
      if(b==b2){
        B[i]=(int)b2;
      }
      else{
        b=Math.pow(x,2);
        B[i]=(int)b;
      }
      
    }
    
    return B;
  }
}
