namespace Program
{
    public static class Program
    {
        public static void Main(string[] args)
        {
            var n = int.Parse(Console.ReadLine());

            var values = new int[n];

            var inputValues = Console.ReadLine().Split();

            for (int i = 0; i < values.Length; i++)
                values[i] = int.Parse(inputValues[i]);

            values = values.OrderBy(v => v).ToArray();

            var result = 0;
            var sumValue = 0;

            for (int i = 0; i < values.Length; i++)
            {
                result += sumValue + values[i];
                sumValue += values[i];
            }

            Console.WriteLine(result);
        }
    }
}