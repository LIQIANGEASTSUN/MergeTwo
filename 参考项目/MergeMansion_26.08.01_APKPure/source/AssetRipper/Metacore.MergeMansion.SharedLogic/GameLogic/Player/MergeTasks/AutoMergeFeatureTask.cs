using Code.GameLogic.AutoMerge;
using Code.GameLogic.Player.MergeTasks;

namespace GameLogic.Player.MergeTasks
{
	public class AutoMergeFeatureTask : MergeTask
	{
		public IPlayer Player { get; }

		public IAutoMergeFeatureModel FeatureModel => null;

		public override TaskCategory Category => default(TaskCategory);

		public AutoMergeFeatureTask(IPlayer player)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
