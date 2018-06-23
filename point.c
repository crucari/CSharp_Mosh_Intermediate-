namespace Methods
{
     public class Point
     {
         public int X;
         public int Y;

         public Point(int x, int y)
         {
             this.X = z;
             this.Y = y;
         }

         public void Move(int x, int y)
         {
            this.X = x;
            this.Y = y;
         }

         public void Move(Point newLocation)  //below is an example of defensive programming
         {
             if (newLocation == null)  //if the new location is null, we throw a ANE and throw a new class.
                 throw new ArgumentNullException("newLocation"); //error reporting  //an exception is just a class  //passes the parameter that was null

             Move(newLocation.X, newLocation.Y);
         }
     }
}

//ANE better than null reference exception. Why? Application will always have a globally error handling mechanism.