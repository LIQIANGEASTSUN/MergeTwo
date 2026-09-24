using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Fishing
{
	public class CameraFeaturesSource : IItemConfigPart<CameraFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public string TakePhotoSfx;

		public string ConfigKey => null;

		public string ItemType => null;

		public CameraFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
