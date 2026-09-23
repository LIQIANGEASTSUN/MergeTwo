using System;
using MergeEngine.Configuration;

namespace MergeEngine.ECS.Components.InteractionTracking
{
	public class ExpendableTrackingData
	{
		public IMergeItem SpawnerItem;

		public bool IsExpend;

		public int? ExpendUsesLeft;

		public string ExpendItemTransform;

		[NonSerialized]
		public string _expendItemSpawned;

		public string ExpendItemSpawned
		{
			get
			{
				return null;
			}
			set
			{
			}
		}
	}
}
