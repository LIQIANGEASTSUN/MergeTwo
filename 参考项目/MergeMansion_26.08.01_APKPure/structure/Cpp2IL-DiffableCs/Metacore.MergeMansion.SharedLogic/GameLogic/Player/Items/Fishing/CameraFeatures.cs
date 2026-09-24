namespace GameLogic.Player.Items.Fishing;

[MetaSerializable]
public class CameraFeatures : ICameraFeatures
{
	public static readonly CameraFeatures NoCameraFeatures; //Field offset: 0x0
	[CompilerGenerated]
	private bool <IsCamera>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <TakePhotoSfx>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool IsCamera
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override string TakePhotoSfx
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static CameraFeatures() { }

	private CameraFeatures() { }

	public CameraFeatures(bool isCamera, string takePhotoSfx) { }

	[CompilerGenerated]
	public override bool get_IsCamera() { }

	[CompilerGenerated]
	public override string get_TakePhotoSfx() { }

	[CompilerGenerated]
	private void set_IsCamera(bool value) { }

	[CompilerGenerated]
	private void set_TakePhotoSfx(string value) { }

}

