using Code.GameLogic.GameEvents;
using GameLogic.Player;
using GameLogic.Player.Items;
using Merge;

public interface IItemEffectUIObject
{
	bool Initialised { get; set; }

	BoardItemHandler BoardItemHandler { get; set; }

	void Initialise();

	void SetValue(float value);

	void SetPreviewValue(float value);

	void SetMinLevel(int level);

	void SetLevel(int level);

	void SetMergeItem(MergeItem mergeItem, BoardItemHandler boardItemHandler, object context);

	void SetLimitedItemCount(IItemDefinition itemDefinition, int count, int limit);

	void SetUpdateStatus(bool ignoreUpdates)
	{
	}

	void SetCoreSupportEventTokenIcon(IPlayer player, CoreSupportEventTokenId tokenId)
	{
	}
}
