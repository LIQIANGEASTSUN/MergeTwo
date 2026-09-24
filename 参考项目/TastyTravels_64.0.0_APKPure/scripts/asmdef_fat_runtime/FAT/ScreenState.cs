using UnityEngine;

namespace FAT
{
	public readonly struct ScreenState
	{
		public readonly int Width;

		public readonly int Height;

		public readonly Rect SafeArea;

		public readonly Rect EffectiveSafeArea;

		public readonly float Aspect;

		public readonly ScreenAspectTier Tier;

		public readonly float MatchValue;

		public ScreenState(int width, int height, Rect safeArea, float matchValue)
		{
			Width = 0;
			Height = 0;
			SafeArea = default(Rect);
			EffectiveSafeArea = default(Rect);
			Aspect = 0f;
			Tier = default(ScreenAspectTier);
			MatchValue = 0f;
		}

		public ScreenState(int width, int height, Rect safeArea, Rect effectiveSafeArea, float matchValue)
		{
			Width = 0;
			Height = 0;
			SafeArea = default(Rect);
			EffectiveSafeArea = default(Rect);
			Aspect = 0f;
			Tier = default(ScreenAspectTier);
			MatchValue = 0f;
		}

		public override string ToString()
		{
			return null;
		}

		public string _003C_003EiFixBaseProxy_ToString()
		{
			return null;
		}
	}
}
