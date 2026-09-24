using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.ECS.Util;
using Merger.Bubbles.Buckets;
using Merger.Bubbles.ECS.Systems;
using Merger.Bubbles.Model;
using Merger.Bubbles.Model.Data;
using Merger.Game.Model;
using Zenject;

namespace Merger.Bubbles.Modifiers
{
	public class BucketBubbleDropProbabilityModifier : BubbleDropProbabilityModifierBase
	{
		[InjectSystem]
		[NonSerialized]
		public BubbledItemSystem _bubbledItemSystem;

		[Inject]
		[NonSerialized]
		public ISmarterBubblesDataModel _bubblesDataModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public ISmarterBubblesAnalyticsModel _analyticsModel;

		[Inject]
		[NonSerialized]
		public ISmarterBubblesBucketsModel _bucketsModel;

		public override bool IsEnabled => false;

		public override string AnalyticsString => null;

		public override void Initialize()
		{
		}

		public int GetBubblePrice(IMergeItem mergeItem)
		{
			return 0;
		}

		public override void TryModifyProbability(ref float probability, IMergeItem mergeItem, SmarterBubblesCheatData cheatData = null)
		{
		}

		public override void Update()
		{
		}

		public float CalculateConversionRatio(BucketProbabilityData data, List<BubbleData> bubbles, string source)
		{
			return 0f;
		}

		public bool UpdateBuckets(List<Bucket> buckets, List<BubbleData> bubbles, string source)
		{
			return false;
		}

		public void UpdateBucketsAnalyticsData(BucketProbabilityData data)
		{
		}
	}
}
