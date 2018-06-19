namespace CSharpIntermediate
{
public class Order
{

}
    class Program
    {
        static void Main(string[] args)
        {
            // var customer = new Customer(1, "John");

        var customer = new customer();
        customer.Id = 1;
        customer.Name = "John",

        var order= new Order();
        // customer.Orders = new List<Order>();
        customer.Orders.Add(order)

        Console.WriteLine(customer.Id);
        Console.WriteLine(customer.Name);

        }
    }
}