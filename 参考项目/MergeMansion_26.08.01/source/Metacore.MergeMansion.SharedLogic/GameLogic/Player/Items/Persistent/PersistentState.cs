using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Persistent
{
	[MetaSerializable]
	public class PersistentState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public bool HasItemStates { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int DecayCycles { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int ItemStates { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public ItemDefinition ResetToItem { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int StartCycles { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int CurrentState { get; set; }

		public PersistentState()
		{
		}

		public PersistentState(bool hasItemStates, int decayCycles, int itemStates, IItemDefinition resetToItem, int startCycles, int currentState)
		{
		}

		public void NextState()
		{
		}

		public void ResetCycles()
		{
		}

		public bool AreCyclesFull()
		{
			return false;
		}
	}
}
