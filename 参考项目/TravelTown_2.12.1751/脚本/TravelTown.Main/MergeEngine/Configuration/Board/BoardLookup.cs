using GameCore.Configuration.Definitions;

namespace MergeEngine.Configuration.Board
{
	public class BoardLookup : MultipleConfigurationLookup<IBoard, string>
	{
		public override string GetKey(IBoard item)
		{
			return null;
		}
	}
}
