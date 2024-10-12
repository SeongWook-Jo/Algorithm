namespace Program
{
    public static class Program
    {
        static int oPos, dPos;
        static int[] visited = new int[100001];

        public static void Main(string[] args)
        {
            var input = Console.ReadLine().Split();

            oPos = int.Parse(input[0]);
            dPos = int.Parse(input[1]);

            Console.WriteLine(BFS());
        }

        static int BFS()
        {
            Queue<int> queue = new Queue<int>();

            queue.Enqueue(oPos);
            visited[oPos] = 1;

            while (queue.Count != 0)
            {
                var curr = queue.Dequeue();

                if (curr == dPos)
                    return visited[curr] - 1;

                if (curr - 1 >= 0 && visited[curr - 1] == 0)
                {
                    visited[curr - 1] = visited[curr] + 1;
                    queue.Enqueue(curr - 1);
                }

                if (curr + 1 <= 100000 && visited[curr + 1] == 0)
                {
                    visited[curr + 1] = visited[curr] + 1;
                    queue.Enqueue(curr + 1);
                }

                if (curr * 2 <= 100000 && visited[curr * 2] == 0)
                {
                    visited[curr * 2] = visited[curr] + 1; 
                    queue.Enqueue(curr * 2);
                }
            }

            return -1;
        }
    }
}