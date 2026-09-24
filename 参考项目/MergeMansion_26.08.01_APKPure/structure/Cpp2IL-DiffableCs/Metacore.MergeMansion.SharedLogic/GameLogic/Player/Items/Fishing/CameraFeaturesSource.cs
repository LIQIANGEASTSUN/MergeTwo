namespace GameLogic.Player.Items.Fishing;

public class CameraFeaturesSource : IItemConfigPart<CameraFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public string TakePhotoSfx; //Field offset: 0x18

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public CameraFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override CameraFeatures ToConfigData(IProducerFactory producerFactory) { }

}

