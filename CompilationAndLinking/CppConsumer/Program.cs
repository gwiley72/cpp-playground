using System;
using System.Runtime.InteropServices;

namespace CppConsumer
{
	public class Program
	{
		public static void Main(string[] args)
		{
			Console.WriteLine("2*3={0}", multiply(2, 3));
			Console.ReadKey();
		}

		[DllImport("DynamicLib.dll", CallingConvention = CallingConvention.Cdecl)]
		public static extern int multiply(int a, int b);
	}
}
