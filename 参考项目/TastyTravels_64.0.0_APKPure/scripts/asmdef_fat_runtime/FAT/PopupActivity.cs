using System;

namespace FAT
{
	public class PopupActivity : IScreenPopup
	{
		[NonSerialized]
		public ActivityLike activity;

		public bool checkState;

		public bool checkActive;

		public UIResAlt PopupUI { get; set; }

		public ActivityVisual Visual { get; set; }

		public override UIResource PopupRes
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public PopupActivity()
		{
		}

		public PopupActivity(ActivityLike acti_, ActivityVisual visual_, UIResAlt ui_, bool check_ = false, bool active_ = true)
		{
		}

		public virtual void Setup(ActivityLike acti_, ActivityVisual visual_, UIResAlt ui_, bool check_ = false, bool active_ = true)
		{
		}

		public virtual void Clear()
		{
		}

		public override bool CheckValid(out string rs_)
		{
			rs_ = null;
			return false;
		}

		public override bool Ready()
		{
			return false;
		}

		public override bool OpenPopup()
		{
			return false;
		}

		public override string ToString()
		{
			return null;
		}

		public bool _003C_003EiFixBaseProxy_CheckValid(out string P0)
		{
			P0 = null;
			return false;
		}

		public UIResource _003C_003EiFixBaseProxy_get_PopupRes()
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_set_PopupRes(UIResource P0)
		{
		}

		public bool _003C_003EiFixBaseProxy_Ready()
		{
			return false;
		}

		public bool _003C_003EiFixBaseProxy_OpenPopup()
		{
			return false;
		}

		public new string _003C_003EiFixBaseProxy_ToString()
		{
			return null;
		}
	}
}
