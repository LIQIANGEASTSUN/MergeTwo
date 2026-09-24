using Metaplay.Core;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public struct MysteryMachineContainerItemData
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public IMysteryMachineItem Item;

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaTime OriginalSpawnTime;

		public MysteryMachineContainerItemData(IMysteryMachineItem item, MetaTime originalSpawnTime)
		{
			Item = null;
			OriginalSpawnTime = default(MetaTime);
		}
	}
}
