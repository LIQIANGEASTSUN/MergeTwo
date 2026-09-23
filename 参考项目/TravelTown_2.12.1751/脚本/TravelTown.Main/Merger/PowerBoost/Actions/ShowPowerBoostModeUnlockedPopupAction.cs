using System;
using Framework.Core.Assets;
using Merger.LiveOps.Events.Actions;

namespace Merger.PowerBoost.Actions
{
	public class ShowPowerBoostModeUnlockedPopupAction : AssetOverrideNavigationAction
	{
		[NonSerialized]
		public Asset _placeholderAsset;

		[NonSerialized]
		public Asset _popupAsset;

		public ShowPowerBoostModeUnlockedPopupAction(object payload)
			: base(null, null, 0)
		{
		}

		public override Asset GetFromAsset()
		{
			return null;
		}

		public override IAsset GetToAsset()
		{
			return null;
		}
	}
}
