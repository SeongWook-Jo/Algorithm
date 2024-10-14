using System.Linq;

namespace Program
{
    public static class Program
    {
        static HashSet<int> birus = new HashSet<int>();
        static Dictionary<int, List<int>> computer = new Dictionary<int, List<int>>();

        public static void Main(string[] args)
        {
            var cCount = int.Parse(Console.ReadLine());

            var coupleCount = int.Parse(Console.ReadLine());

            for (int i = 1; i <= cCount; i++)
            {
                computer.Add(i, new List<int>());
            }

            for (int i = 0; i < coupleCount; i++)
            {
                var input = Console.ReadLine().Split();

                var d = int.Parse(input[0]);
                var e = int.Parse(input[1]);

                computer[d].Add(e);
                computer[e].Add(d);
            }

            Birus(1);

            Console.WriteLine(birus.Count - 1);
        }

        static void Birus(int computerId)
        {
            birus.Add(computerId);

            foreach (var targetComputer in computer[computerId])
            {
                if (birus.Contains(targetComputer))
                    continue;

                Birus(targetComputer);
            }
        }
    }
}