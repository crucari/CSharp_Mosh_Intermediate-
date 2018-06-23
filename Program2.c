namespace Methods
// {
//     class Program
//     {
//         static void Main(string[] args)
//         {
//             var point = new Point(10, 20);
//             point.Move(new Point(40,60));
//             console.WriteLine("Point is at ({0}, {1})"), point.X, point Y);

//             point.Move(100, 200);
//         }
//     }
// }

----
//ex of overloading
class Program
{
    static void Main(string[] args)

}

try  //the code that has an exception
{
    var point = new Point(10,20);
    point.Move(null);
    console.WriteLine("Point is at ({0}, {1})"), point.X, point Y);

    point.Move(100, 200); //2nd overload
    Console.WriteLine("Point is at ({0}, {1})"), point.X, point Y);

}

catch (Exception)  //message that appears on the console
{
    // throw;
    Console.WriteLine("An unexpected error occured.");
}
// }