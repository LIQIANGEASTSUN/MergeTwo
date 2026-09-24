using Merger.Rewards.Enums;
using Merger.Rewards.Models.Datas;

namespace Merger.Rewards.Interfaces.Datas
{
	public interface IRewardTextRepresented
	{
		bool HideAmountText { get; }

		string GetTopText(RewardDisplayTextData rewardDisplayTextData, RewardDisplayFlag rewardPresentationViewFlags);

		string GetBottomText(RewardDisplayTextData rewardDisplayTextData);
	}
}
