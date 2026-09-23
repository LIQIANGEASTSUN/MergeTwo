using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items
{
	public class AudioFeaturesSource : IItemConfigPart<AudioFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public string ActivationAutoSfx;

		public string ActivationManualSfx;

		public string CollectableSfx;

		public string SinkProgressSfx;

		public string SinkCompletedSfx;

		public string SelectSfx;

		public string SpawnSfx;

		public string MergeSfx;

		public string DecaySfx;

		public string FishingSfx;

		public string ConfigKey => null;

		public string ItemType => null;

		public AudioFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
