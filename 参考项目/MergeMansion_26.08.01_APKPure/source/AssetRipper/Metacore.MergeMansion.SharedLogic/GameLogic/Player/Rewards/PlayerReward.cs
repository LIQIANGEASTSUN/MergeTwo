using System.Runtime.Serialization;
using Code.GameLogic.Config;
using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Player;
using Metaplay.Core.Rewards;

namespace GameLogic.Player.Rewards
{
	[MetaSerializable]
	public abstract class PlayerReward : MetaPlayerRewardBase, IValidatable, IPlayerReward
	{
		[MetaMember(100, MetaMemberFlags.None)]
		public CurrencySource Source { get; set; }

		[IgnoreDataMember]
		public virtual bool ShouldShowInfoButton => false;

		public override void InvokeConsume(IPlayerModelBase playerModel, IRewardSource source)
		{
		}

		public abstract void Consume(IPlayer player, AnalyticsContext analyticsContext, IRewardContext rewardContext);

		public abstract void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries);

		public virtual string GetAmountString(int? value)
		{
			return null;
		}

		public virtual string GetAmountString(int? value, bool isPlusSigned)
		{
			return null;
		}

		public abstract string Name(IPlayer player);

		public abstract string TypeString();

		public CurrencySource GetCurrencySource(IRewardContext rewardContext)
		{
			return default(CurrencySource);
		}

		public PlayerReward()
		{
		}
	}
}
