using System.Collections.Generic;
using Merger.Bubbles.Buckets;
using Merger.Game.Data;

namespace Merger.Bubbles
{
	public interface ISmarterBubblesBucketsModel
	{
		BucketProbabilityData BucketsProbabilityData { get; }

		IReadOnlyDictionary<CurrentBoardType, BucketProbabilityData> ProbabilityData { get; }
	}
}
