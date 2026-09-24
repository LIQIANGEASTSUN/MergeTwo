using System.Runtime.InteropServices;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public class BaseMiniBoardRewardEvent
	{
		[StructLayout((LayoutKind)0, Size = 1)]
		public struct RewardAreaUIUpdate : IEvent
		{
		}

		public struct RewardAreaItemAdded : IEvent
		{
			public int AddedItemCount;

			public bool UpdateBoardIcon;
		}

		public struct UpdateRewardAreaCount : IEvent
		{
			public int TotalItemCount;
		}
	}
}
