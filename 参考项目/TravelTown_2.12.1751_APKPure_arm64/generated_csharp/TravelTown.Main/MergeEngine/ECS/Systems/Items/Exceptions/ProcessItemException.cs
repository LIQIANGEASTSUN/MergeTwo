using System;

namespace MergeEngine.ECS.Systems.Items.Exceptions
{
	public class ProcessItemException : Exception
	{
		[NonSerialized]
		public readonly string _id;

		[NonSerialized]
		public readonly Exception _originalException;

		public override string Message => null;

		public override string StackTrace => null;

		public ProcessItemException(string id, Exception e)
		{
		}
	}
}
