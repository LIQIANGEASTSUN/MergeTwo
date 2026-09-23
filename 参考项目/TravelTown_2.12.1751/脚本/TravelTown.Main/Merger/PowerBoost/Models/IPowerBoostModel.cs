using Framework.Core.DataBinding;

namespace Merger.PowerBoost.Models
{
	public interface IPowerBoostModel
	{
		MutableBindableProperty<bool> IsPowerBoostOn { get; }

		MutableBindableProperty<int> PowerBoostMode { get; }

		MutableBindableProperty<bool> IsEventPowerBoostOn { get; }

		MutableBindableProperty<int> EventPowerBoostMode { get; }
	}
}
