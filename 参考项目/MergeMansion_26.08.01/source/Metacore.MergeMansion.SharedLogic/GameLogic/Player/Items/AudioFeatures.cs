using Metaplay.Core.Model;

namespace GameLogic.Player.Items
{
	[MetaSerializable]
	public class AudioFeatures : IAudioFeatures
	{
		public static readonly AudioFeatures NoAudio;

		[MetaMember(1, MetaMemberFlags.None)]
		public string ActivationAutoSfx { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string ActivationManualSfx { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string CollectableSfx { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public string SinkProgressSfx { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public string SinkCompletedSfx { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public string SelectSfx { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public string SpawnSfx { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public string MergeSfx { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public string DecaySfx { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public string FishingSfx { get; set; }

		public AudioFeatures()
		{
		}

		public AudioFeatures(string activationAutoSfx, string activationManualSfx, string collectableSfx, string sinkProgressSfx, string sinkCompletedSfx, string selectSfx, string spawnSfx, string mergeSfx, string decaySfx, string fishingSfx)
		{
		}
	}
}
