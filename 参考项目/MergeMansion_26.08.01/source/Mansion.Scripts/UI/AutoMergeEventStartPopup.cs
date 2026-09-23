using JetBrains.Annotations;
using UnityEngine;

namespace UI
{
	public class AutoMergeEventStartPopup : CoreSupportEventStartPopup<AutoMergeEventStartMenuState>
	{
		[SerializeField]
		public AddressablePopupVisuals addressablePopupVisuals;

		[SerializeField]
		public RectTransform showButtonTransform;

		public override string MenuTag => null;

		public RectTransform ShowButtonTransform => null;

		public override void PopulateContent()
		{
		}

		[PublicAPI]
		public void ShowButtonClicked()
		{
		}

		public void InitliazeAutoMergeMinigame()
		{
		}

		public override void CloseMenuButton()
		{
		}

		public Vector3 GetShowButtonPosition()
		{
			return default(Vector3);
		}
	}
}
