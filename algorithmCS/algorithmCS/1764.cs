namespace Program
{
    public static class Program
    {
        public static void Main(string[] args)
        {
            var input = Console.ReadLine().Split();
            
            var nd = int.Parse(input[0]);
            var nb = int.Parse(input[1]);

            var nameHash = new HashSet<string>();
            var nameList = new List<string>();

            for (int i = 0; i < nd + nb; i++)
            {
                var name = Console.ReadLine();

                if (nameHash.Contains(name))
                    nameList.Add(name);
                else
                    nameHash.Add(name);
            }

            nameList.Sort();

            Console.WriteLine(nameList.Count);

            foreach (var name in nameList)
                Console.WriteLine(name);
        }
    }
}