using Framework.Core.MVVM.Model;
using MergeEngine.Configuration.Boosters;

namespace MergeEngine.Model.Configuration
{
	public class TimeTwisterAnimationConfigurationModel : ModelBase, ITimeTwisterAnimationConfigurationModel
	{
		public TimeTwisterAnimationConfig AnimationConfig { get; set; }

		public override void InitializeModel()
		{
		}

		public override void DisposeModel()
		{
		}

		public void AnimationConfigLoaded(TimeTwisterAnimationConfig config)
		{
		}
	}
}
