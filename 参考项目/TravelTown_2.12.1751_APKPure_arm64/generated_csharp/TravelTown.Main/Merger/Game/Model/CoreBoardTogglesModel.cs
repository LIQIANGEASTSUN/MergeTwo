using System;
using Framework.Core.MVVM.Model;
using Framework.Core.Services.Backend.User;
using Zenject;

namespace Merger.Game.Model
{
	public class CoreBoardTogglesModel : ModelBase, ICoreBoardTogglesModel
	{
		public const string NewMainBgEnabledKey = "backgroundcoreenabled";

		public const string NewCoreBoardBgAndBlockersEnabledKey = "corenewbackgroundphaseone";

		public const bool NewMainBgEnabledFallbackValue = true;

		public const bool NewCoreBoardBgAndBlockersEnabledFallbackValue = true;

		[Inject]
		[NonSerialized]
		public IUserProfileDefaultValuesProvider _defaultValuesProvider;

		public bool IsNewMainBackgroundEnabled => false;

		public bool IsNewCoreBoardBackgroundAndBlockersEnabled => false;
	}
}
