using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Sinkable
{
	[MetaSerializable]
	public interface ISinkInAction
	{
		void SinkIn(IPlayer player, MergeItem itemToSinkIn);
	}
}
