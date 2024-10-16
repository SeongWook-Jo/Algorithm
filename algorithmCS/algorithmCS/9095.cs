namespace Program
{
    public static class Program
    {
        static int cnt;
        public static void Main(string[] args)
        {
            var tc = int.Parse(Console.ReadLine());
            List<int> results = new List<int>();
            for (int i = 0; i < tc; i++)
            {
                var value = int.Parse(Console.ReadLine());
                cnt = 0;
                DFS(value);
                results.Add(cnt);
            }

            foreach (int result in results)
                Console.WriteLine(result);
        }

        static void DFS(int value)
        {
            if (value == 0)
            {
                cnt++;
                return;
            }

            if (value >= 3)
                DFS(value - 3);

            if (value >= 2)
                DFS(value - 2);

            DFS(value - 1);
        }
    }
}