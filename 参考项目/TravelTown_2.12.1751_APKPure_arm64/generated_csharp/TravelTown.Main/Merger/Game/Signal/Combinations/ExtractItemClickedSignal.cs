using MergeEngine.ECS.Components.Items;

namespace Merger.Game.Signal.Combinations
{
	public class ExtractItemClickedSignal
	{
		public CombiningComponent CombiningComponent;

		public string ItemToExtract;

		public ExtractItemClickedSignal(CombiningComponent dataCombiningComponent, string id)
		{
		}
	}
}
