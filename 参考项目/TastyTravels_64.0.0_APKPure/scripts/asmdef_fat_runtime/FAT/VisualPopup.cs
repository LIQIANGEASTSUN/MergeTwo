using System.Collections.Generic;
using EL.Resource;
using IFix.Core;
using UnityEngine.UI;
using fat.rawdata;

namespace FAT
{
	public readonly struct VisualPopup
	{
		public readonly UIResAlt res;

		public readonly ActivityVisual visual;

		public readonly PopupActivity popup;

		public VisualPopup(UIResource ui_)
		{
			res = null;
			visual = null;
			popup = null;
		}

		public void Setup(int theme_, ActivityLike acti_, bool check_ = false, bool active_ = true)
		{
		}

		public void Refresh(UIVisualGroup group_)
		{
		}

		public IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		[IDTag(0)]
		public void Popup(ScreenPopup popup_, PopupType state_, int limit_ = 0, object custom_ = null)
		{
		}

		[IDTag(2)]
		public void Popup(ScreenPopup popup_, int limit_ = 0, object custom_ = null)
		{
		}

		[IDTag(1)]
		public void Popup(int limit_ = 0, object custom_ = null)
		{
		}

		public bool TryDequeue()
		{
			return false;
		}

		public void Open(ActivityLike acti_)
		{
		}
	}
}
