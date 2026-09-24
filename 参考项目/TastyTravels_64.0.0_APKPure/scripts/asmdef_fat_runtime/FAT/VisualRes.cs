using System.Collections.Generic;
using EL.Resource;
using UnityEngine.UI;

namespace FAT
{
	public readonly struct VisualRes
	{
		public readonly UIResAlt res;

		public readonly ActivityVisual visual;

		public VisualRes(UIResource ui_)
		{
			res = null;
			visual = null;
		}

		public void Setup(int theme_)
		{
		}

		public void Refresh(UIVisualGroup group_)
		{
		}

		public IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		public void Open(ActivityLike acti_)
		{
		}
	}
}
