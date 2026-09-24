using GameLogic.Player.Items.Charges;
using GameLogic.Player.Items.Consumption.Logic;
using GameLogic.Player.Items.TimeContainer;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Consumption
{
	[MetaSerializable]
	public sealed class ConsumableFeatures : IConsumableFeatures
	{
		public static readonly ConsumableFeatures NoConsumable;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsConsumable { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public IConsumptionLogic Logic { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public bool AllowNearMatching { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public bool DragSafeAreaEnabled { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int ItemStackCap { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public bool CanSpawnBubbles { get; set; }

		public ConsumableFeatures()
		{
		}

		public ConsumableFeatures(bool isConsumableItem, IConsumptionLogic logic, bool allowNearMatching, bool dragSafeAreaEnabled, int itemStackCap, bool canSpawnBubbles)
		{
		}

		public static bool IsMergeable(IMergeItem sourceItem, IMergeItem targetItem)
		{
			return false;
		}

		public static bool IsChargeCapReached(IMergeItem sourceItem, IMergeItem targetItem, IPlayer player)
		{
			return false;
		}

		public static bool IsTimeCapReached(IMergeItem sourceItem, IMergeItem targetItem, IPlayer player)
		{
			return false;
		}

		public static ChargesState MergeCharges(MergeItem sourceItem, MergeItem targetItem, IPlayer player, out bool isMergeConsumingSourceItem)
		{
			isMergeConsumingSourceItem = default(bool);
			return null;
		}

		public static TimeContainerState MergeTime(MergeItem sourceItem, MergeItem targetItem, IPlayer player, out bool isMergeConsumingSourceItem)
		{
			isMergeConsumingSourceItem = default(bool);
			return null;
		}

		public bool Equals(ConsumableFeatures other)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}
	}
}
