using System.Runtime.InteropServices;

namespace Program
{
    public static class Program
    {
        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            var cost = new int[n, 3];

            for (int i = 0; i < n; i++)
            {
                var input = Console.ReadLine().Split();

                cost[i, 0] = int.Parse(input[0]);
                cost[i, 1] = int.Parse(input[1]);
                cost[i, 2] = int.Parse(input[2]);
            }

            var total = new int[n, 3];

            total[0, 0] = cost[0, 0];
            total[0, 1] = cost[0, 1];
            total[0, 2] = cost[0, 2];

            for (int i = 1; i < n; i++)
            {
                total[i, 0] = Math.Min(total[i - 1, 1], total[i - 1, 2]) + cost[i, 0];
                total[i, 1] = Math.Min(total[i - 1, 0], total[i - 1, 2]) + cost[i, 1];
                total[i, 2] = Math.Min(total[i - 1, 1], total[i - 1, 0]) + cost[i, 2];
            }

            var min = Math.Min(total[n - 1, 0], total[n - 1, 1]);
            min = Math.Min(min, total[n - 1, 2]);
            Console.WriteLine(min);
        }
    }
}