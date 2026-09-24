using System.Runtime.InteropServices;
using UnityEngine;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public class BaseMiniBoardProgressEvent
	{
		[StructLayout((LayoutKind)0, Size = 1)]
		public struct LoadNewBoard : IEvent
		{
		}

		public struct MaxProgressLevelItemChanged : IEvent
		{
			public int MaxLevel;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct AnimatedProgressItemAnimationCompleted : IEvent
		{
		}

		public struct ProgressItemFoundRaiseKey : IEvent
		{
			public Vector3 KeyPosition;

			public float KeyWorldScale;

			public Sprite KeySprite;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct BoardNoticePopupClosed : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct BoardCongratsPopupClosed : IEvent
		{
		}
	}
}
