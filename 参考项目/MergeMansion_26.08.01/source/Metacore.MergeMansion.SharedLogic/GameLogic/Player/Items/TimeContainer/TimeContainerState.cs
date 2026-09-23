using GameLogic.Config.Types;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.TimeContainer
{
	[MetaSerializable]
	public class TimeContainerState : IWritableTimeContainerState, ITimeContainerState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration Remaining { get; set; }

		MetacoreDuration ITimeContainerState.Remaining => default(MetacoreDuration);

		public void SetRemaining(MetacoreDuration remaining)
		{
		}
	}
}
