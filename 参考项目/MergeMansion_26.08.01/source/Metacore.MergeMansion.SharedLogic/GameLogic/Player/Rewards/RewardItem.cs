using System.Runtime.Serialization;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Player.Items;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Config;
using Metaplay.Core.Forms;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(6)]
	public class RewardItem : PlayerReward, IMutablePlayerReward, IPlayerReward
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaValidateRequired]
		[ValidateItemDefMetaMember]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef ItemDef { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Amount { get; set; }

		[MetaFormNotEditable]
		[MetaMember(3, MetaMemberFlags.None)]
		public bool FromSupport { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		[MetaValidateRequired]
		public MergeBoardId MergeBoardId { get; set; }

		[MetaFormNotEditable]
		[MetaMember(5, MetaMemberFlags.None)]
		public OverrideItemFeatures OverrideItemFeatures { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public bool ForceOnTopOfPocket { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public string OverridePoolTag { get; set; }

		[IgnoreDataMember]
		public override bool ShouldShowInfoButton => false;

		public IItemDefinition GetItem(IPlayer player)
		{
			return null;
		}

		public IItemDefinition GetItem(IMergeMansionGameConfig config)
		{
			return null;
		}

		public string GetPoolTag(IPlayer player)
		{
			return null;
		}

		public bool MayMutateAtRuntime(IMergeMansionGameConfig config)
		{
			return false;
		}

		public RewardItem()
		{
		}

		public RewardItem(MergeBoardId boardId, IItemDefinition itemDefinition, int amount, bool fromSupport, CurrencySource currencySource, bool forceOnTopOfPocket = false, string overridePoolTag = null)
		{
		}

		public RewardItem(MergeBoardId boardId, int item, int amount, bool fromSupport, CurrencySource currencySource, OverrideItemFeatures overrideItemFeatures, bool forceOnTopOfPocket = false, string overridePoolTag = null)
		{
		}

		public RewardItem(MergeBoardId boardId, ItemDef itemDef, int amount, bool fromSupport, CurrencySource currencySource, OverrideItemFeatures overrideItemFeatures = null, bool forceOnTopOfPocket = false, string overridePoolTag = null)
		{
		}

		public override void Consume(IPlayer playerModel, AnalyticsContext context, IRewardContext rewardContext)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public override string GetAmountString(int? value)
		{
			return null;
		}

		public override string GetAmountString(int? value, bool isPlusSigned)
		{
			return null;
		}

		public IPlayerReward GetMutatedReward(IPlayer player, Option<RewardSourceContext> rewardSourceContextOption)
		{
			return null;
		}

		public override string Name(IPlayer player)
		{
			return null;
		}

		public override string TypeString()
		{
			return null;
		}

		public override string ToString()
		{
			return null;
		}

		public static RewardItem ReplaceMergeBoard(RewardItem rewardItem, MergeBoardId mergeBoardId, IPlayer player)
		{
			return null;
		}

		public static RewardItem ReplaceItem(RewardItem rewardItem, IItemDefinition item)
		{
			return null;
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
