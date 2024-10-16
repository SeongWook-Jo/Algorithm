namespace Program
{
    public static class Program
    {
        static int cnt;
        static Queue<int> queue = new Queue<int>();
        public static void Main(string[] args)
        {
            var tc = int.Parse(Console.ReadLine());
            List<int> results = new List<int>();
            for (int i = 0; i < tc; i++)
            {
                var value = int.Parse(Console.ReadLine());
                cnt = 0;
                queue.Enqueue(value);
                BFS();
                results.Add(cnt);
            }

            foreach (int result in results)
                Console.WriteLine(result);
        }

        static void BFS()
        {
            while (queue.Count > 0)
            {
                var val = queue.Dequeue();

                if (val == 0)
                {
                    cnt++;
                    continue;
                }

                if (val >= 3)
                    queue.Enqueue(val - 3);

                if (val >= 2)
                    queue.Enqueue(val - 2);

                queue.Enqueue(val - 1);
            }
        }
    }
}