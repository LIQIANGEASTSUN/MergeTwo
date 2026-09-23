using System;
using System.Collections.Generic;
using Merger.Bubbles.Buckets;
using Merger.Game.Data;
using Merger.Game.Model;
using Zenject;

namespace Merger.Bubbles
{
	public class SmarterBubblesBucketsModel : ISmarterBubblesBucketsModel
	{
		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[NonSerialized]
		public readonly IReadOnlyDictionary<CurrentBoardType, BucketProbabilityData> _probabilityData;

		public BucketProbabilityData BucketsProbabilityData => null;

		public IReadOnlyDictionary<CurrentBoardType, BucketProbabilityData> ProbabilityData => null;
	}
}
