using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Fishing
{
	[MetaSerializable]
	public class CameraFeatures : ICameraFeatures
	{
		public static readonly CameraFeatures NoCameraFeatures;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsCamera { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string TakePhotoSfx { get; set; }

		public CameraFeatures()
		{
		}

		public CameraFeatures(bool isCamera, string takePhotoSfx)
		{
		}
	}
}
