using GameCore.Configuration.Definitions;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Capabilities;
using Merger.Boosters.Declarations.Capabilities;

namespace Merger.Boosters.Declarations.Definitions.Interfaces
{
	public interface IBoosterItem : IItem, IUniqueStringKeyAsset
	{
		TimeDurationCapability TimeDuration { get; }

		ActivationCapability Activation { get; }

		CooldownBlockCapability CooldownBlock { get; }

		MergeItemCapability MergeItem { get; }
	}
}
