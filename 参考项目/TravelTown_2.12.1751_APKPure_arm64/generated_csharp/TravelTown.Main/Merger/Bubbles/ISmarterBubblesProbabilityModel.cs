using MergeEngine.Configuration;

namespace Merger.Bubbles
{
	public interface ISmarterBubblesProbabilityModel
	{
		float GetBubbleProbability(IMergeItem mergeItem);

		void UpdateModifiers();
	}
}
