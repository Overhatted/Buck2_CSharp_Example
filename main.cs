using System;
using Newtonsoft.Json;

class Product
{
  public string Name;
  public DateTime Expiry;
  public decimal Price;
  public string[] Sizes;
}

class Program
{
  static void Main(string[] args)
  {
    Product product = new Product();
    product.Name = "Apple";
    product.Expiry = new DateTime(2008, 12, 28);
    product.Price = 3.99M;
    product.Sizes = new string[] { "Small", "Medium", "Large" };

    string json = JsonConvert.SerializeObject(product);

    Console.WriteLine("Hello world");
    Console.WriteLine(json);
  }
}